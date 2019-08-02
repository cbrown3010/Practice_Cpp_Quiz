#include <iostream>
using namespace std;

int main()
{
	int sum = 1;
	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		for (int j = 1; j <= b; j++)
		{
			sum = sum * j;
		}
		cout << sum << endl;
		sum = 1;
	}
	return 0;
}