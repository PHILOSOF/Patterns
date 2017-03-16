#include <iostream>
using namespace std;

class Point
{
	const double X;
	const double Y;
	char color;
	int size;

public:

	Point(char c, int s) : color(c), size(s), X(20), Y(5)
	{}

	void Show() const
	{
		cout << X << " " << Y << " " << color << " " << size << endl;
	}
};
int main()
{
	Point p('r', 15);
	Point p2('b', 20);

	p.Show();
	p2.Show();

	return 0;
}