#ifndef _HUFFMAN_H_
#define _HUFFMAN_H_

#include<map>
using namespace std;

typedef char TElemType;
typedef int WeiType;
const int MAX_NUM = 260;
const int MAX_SIZE = 2 * MAX_NUM - 1;

class Huffman
{
private:
	struct HuffTree
	{
		TElemType elem;
		WeiType weight;
		int pa, lc, rc;
	} HT[MAX_SIZE];
	map<TElemType, int> loca;//各元素在哈夫曼树数组位置
	int count;//元素种类数

	void select(int& s1, int& s2);

public:
	Huffman();//初始化
	~Huffman();
	bool init();//建树
	bool enCode();
	bool deCode();
	bool output();
};

#endif