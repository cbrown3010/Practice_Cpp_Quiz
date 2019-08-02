#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int sum = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		while (b > 0)
		{
			int j = 0;
			j = b % 10;
			sum = sum + j;
			b = b / 10;
		}
		cout << sum << endl;
		sum = 0;
	}
	return 0;
}