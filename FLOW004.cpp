#include <iostream>
using namespace std;

int main()
{
	int a, b, j;
	int sum = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		j = b % 10;
		while (b > 10)
			b = b / 10;
		sum = j + b;
		cout << sum << endl;
	}
	return 0;
}
