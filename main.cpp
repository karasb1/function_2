#include <iostream>
using namespace std;

void distance(int a, int b)
{
	if (a <= b)
	{
		cout << a << " ";
	}
	distance(++a, b);
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	distance(num1, num2);
	return 0;
}