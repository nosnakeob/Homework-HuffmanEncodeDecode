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
		<< "                          ����������" << endl
		<< "1. ��ʼ��" << endl
		<< "2. ���� ToBeTran.data" << endl
		<< "3. ���� CodeFile.data" << endl
		<< "4.��������ļ�" << endl
		<< "5.�˳�����" << endl
		<< "---------------------------------------------------------------------" << endl
		<< "������ѡ��:";
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
		//		cout << "�ļ���ȡʧ�ܣ�" << endl;
		//	}
		//	break;
		//case ENCODE:
		//	if (!huff.enCode())
		//	{
		//		cout << "�ļ���ȡʧ�ܣ�" << endl;
		//	}
		//	break;
		//case DECODE:
		//	if (!huff.deCode())
		//	{
		//		cout << "�ļ���ȡʧ�ܣ�" << endl;
		//	}
		//	break;
		//case OUTPUT:
		//	if (!huff.output())
		//	{
		//		cout << "�ļ���ȡʧ�ܣ�" << endl;
		//	}
		//	break;
		//case EXIT:
		//	cout << "���ڹر�..." << endl;
		//	exit(1);
		//	Sleep(500);
		//	break;
		//default:
		//	break;
		//}

	}


	return 0;
}