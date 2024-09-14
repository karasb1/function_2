#include <iostream>
using namespace std;

int _pow(int number, int p)
{
	if (p == 0)
	{
		return 1;
	}
	return number * _pow(number, --p);
}


int main()
{
	int number, p;
	cin >> number >> p;
	cout << _pow(number, p) << endl;
}