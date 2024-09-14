#include <iostream>
using namespace std;

void print(int n)
{
	if (n > 0)
	{
		cout << "*";
	}
	print(n - 1);
}


int main()
{
	int N;
	cin >> N;
	print(N);
	return 0;
}