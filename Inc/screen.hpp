#ifndef _SCREEN_H_
#define _SCREEN_H_

class Screen
{
public:
	int option();
	void interface();


private:
	enum Choise
	{
		INIT,
		ENCODE,
		DECODE,
	};

	//Screen();
	//~Screen();

};

Screen::Screen()
{
}

Screen::~Screen()
{
}


#endif // !_SCREEN_H_
