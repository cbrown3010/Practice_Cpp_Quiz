#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int count = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		while (b > 0)
		{
			if (b % 10 == 4)
				count++;
			b = b / 10;
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}
