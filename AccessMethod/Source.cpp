#include <iostream>
#include <string>

class Computer
{
	std::string lable;
public:
	void setLable(const std::string& lable)
	{
		this->lable = lable;
	}
	std::string getLable()
	{
		return this->lable;
	}
};


int main()
{
	Computer comp;
	comp.setLable("Asus");
	std::cout << comp.getLable() << std::endl;
	return 0;
}