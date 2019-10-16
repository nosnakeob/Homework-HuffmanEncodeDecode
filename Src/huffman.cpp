#include "huffman.hpp"
#include <iostream>
#include <stack>

using namespace std;

Huffman::Huffman()
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		HT[i].elem = HT[i].weight = 0;
		HT[i].lc = HT[i].pa = HT[i].rc = 0;
		count = 0;
	}
}

Huffman::~Huffman()
{
}

void Huffman::select(int& node1, int& node2)
{
	const int INF = (int)1e10;
	int min1 = INF, min2 = INF;

	for (int i = 1; i <= count; i++)
	{
		if (!HT[i].pa && HT[i].weight < min1) //第一小
		{
			node1 = i;
			min1 = HT[i].weight;
		}
		else if (!HT[i].pa && HT[i].weight < min2) //第二小
		{
			node2 = i;
			min2 = HT[i].weight;
		}
	}

}

bool Huffman::init()
{
	//读
	TElemType e;

	if (!freopen("DataFile.data", "r", stdin))//文件不存在
	{
		return 0;
	}


	while (cin >> e)
	{

		if (loca.count(e) <= 0)//该元素不存在
		{
			loca[e] = count + 1;//记录元素位置
			HT[count + 1].elem = e;
			count++;
		}

		HT[loca[e]].weight++;
	}

	if (count <= 0)//文件为空
	{
		fclose(stdin);
		return 0;
	}

	//建树
	int node1, node2; //结点i
	for (int i = count + 1; i <= 2 * count - 1; i++)
	{
		select(node1, node2);
		HT[node1].pa = i;
		HT[node2].pa = i;
		HT[i].lc = node1;
		HT[i].rc = node2;
		HT[i].weight = HT[node1].weight + HT[node2].weight;
	}

	fclose(stdin);
	return 1;

}

bool Huffman::enCode()
{
	if (!freopen("ToBeTran.data", "r", stdin))//文件不存在
	{
		return 0;
	}
	freopen("Code.txt", "w", stdout);

	TElemType e;

	while (cin >> e)
	{
		if (!loca.count(e))//编码元素不在树上
		{
			fclose(stdin);
			fclose(stdout);
			return 0;
		}

		stack<bool> s; //利用栈倒序输出
		int p = loca[e];	 //类似指针；
		while (HT[p].pa)
		{
			if (HT[HT[p].pa].lc == p)
				s.push(0);
			else
				s.push(1);
			p = HT[p].pa;
		}

		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}

	}

	fclose(stdin);
	fclose(stdout);
	return 1;
}

bool Huffman::deCode()
{
	if (!freopen("CodeFile.data", "r", stdin))//文件不存在
	{
		return 0;
	}
	freopen("Textfile.txt", "w", stdout);

	int c, p = 0;//从根结点出发
	while (cin >> c)
	{
		if (HT[p].elem != 0)//到叶结点
		{
			count << HT[p].elem;
			p = 0;
		}
		else
		{
			p = (c == 0 ? HT[p].lc : HT[p].rc);
		}

	}

	fclose(stdin);
	fclose(stdout);
	return 1;
}

bool Huffman::output()
{
	if (freopen("ToBeTran.data", "r", stdin))
	{
		return 0;
	}

	for (int i = 1; i <= count; i++)
	{
		cout << HT[i].elem << HT[i].weight << endl;
	}


	while (true)
	{
		cout << stdin;
	}


	return 1;
}
