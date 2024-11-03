#include <iostream>
using namespace std;

int m(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return m(b, a % b);
}



int main()
{
	int a, b;
	cin >> a >> b;
	cout << m(a, b) << endl;
	return 0;
}