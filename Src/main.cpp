#include <iostream>
#include "huffman.hpp"
#include <Windows.h>
using namespace std;

enum Choise
{
	INIT,
	ENCODE,
	DECODE,
	OUTPUT,
	EXIT
};

void Menu()
{
	cout << "---------------------------------------------------------------------" << endl
		<< "                          哈夫曼编码" << endl
		<< "1. 初始化" << endl
		<< "2. 编码 ToBeTran.data" << endl
		<< "3. 译码 CodeFile.data" << endl
		<< "4.输出所有文件" << endl
		<< "5.退出程序" << endl
		<< "---------------------------------------------------------------------" << endl
		<< "请输入选项:";
}


int main(int argc, char* argv[])
{
	Huffman huff;

	while (true)
	{
		Menu();

		//Choise c;
		//cin >> (int&)c;
		//switch (c)
		//{
		//case INIT:
		//	if (!huff.init())
		//	{
		//		cout << "文件读取失败！" << endl;
		//	}
		//	break;
		//case ENCODE:
		//	if (!huff.enCode())
		//	{
		//		cout << "文件读取失败！" << endl;
		//	}
		//	break;
		//case DECODE:
		//	if (!huff.deCode())
		//	{
		//		cout << "文件读取失败！" << endl;
		//	}
		//	break;
		//case OUTPUT:
		//	if (!huff.output())
		//	{
		//		cout << "文件读取失败！" << endl;
		//	}
		//	break;
		//case EXIT:
		//	cout << "正在关闭..." << endl;
		//	exit(1);
		//	Sleep(500);
		//	break;
		//default:
		//	break;
		//}

	}


	return 0;
}