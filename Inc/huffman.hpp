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
	map<TElemType, int> loca;//��Ԫ���ڹ�����������λ��
	int count;//Ԫ��������

	void select(int& s1, int& s2);

public:
	Huffman();//��ʼ��
	~Huffman();
	bool init();//����
	bool enCode();
	bool deCode();
	bool output();
};

#endif