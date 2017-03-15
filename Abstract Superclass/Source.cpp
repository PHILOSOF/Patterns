#include <iostream>

class Window
{
public:
	virtual void show() = 0;
};

class Button:public Window
{
public:
	void show()
	{
		std::cout << "Button\n";
	}
};

class ToolBar :public Window
{
public:
	void show()
	{
		std::cout << "ToolBar\n";
	}
};
class CheackBox :public Window
{
public:
	void show()
	{
		std::cout << "CheackBox\n";
	}
};

int main()
{
	Window* windows[5];
	windows[0] = new Button();
	windows[1] = new CheackBox();
	windows[2] = new Button();
	windows[3] = new ToolBar();
	windows[4] = new Button();

	for (int i = 0; i < 5; ++i)
	{
		windows[i]->show();
	}

	return 0;
}