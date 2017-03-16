#include <iostream>
using namespace std;

// First implementation
class MathEuclidManager
{
public:
	const static double PI;
};

const double MathEuclidManager::PI = 3.14;

// Second implementation
namespace MyMathManager
{
	const double PI = 24.4356565;
}

int main()
{
	cout << MathEuclidManager::PI << endl;
	cout << MyMathManager::PI;
	return 0;
}