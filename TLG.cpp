#include <iostream>
using namespace std;

int main()
{
	int a, b, c, lead, player;
	int maxlead = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		if (b > c)
		{
			lead = b - c;
			if (lead > maxlead)
				maxlead = lead;
			player = 2;
		}
		else
			lead = c - b;
		if (lead > maxlead)
			maxlead = lead;
		player = 1;
	}
	cout << player << ' ' << maxlead;
		return 0;
}