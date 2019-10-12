#include<iostream>
#include"screen.hpp"

using namespace std;

Screen::Screen()
{

}

Screen::~Screen()
{

}

bool Screen::option()
{
	int c;
	cin >> c;

	switch (c)
	{
	case INIT:
		break;

	case ENCODE:
		huff.enCode();
		break;

	case DECODE:
		huff.deCode();
		break;

	default:
		return 0;

	}

	return 1;
}