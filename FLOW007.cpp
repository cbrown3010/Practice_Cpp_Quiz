#include <iostream>
using namespace std;

int main()
{
	int a, b, i, j;
	cin >> a;
	for (i = 0; i < a; i++)
	{
		cin >> b;
		j = 0;
		while (b > 0)
		{
			j = (j * 10) + b % 10;
			b = b / 10;
		}
	cout << j << endl;
	}
	return 0;
}
