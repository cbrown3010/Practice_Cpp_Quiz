#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	for (int i=0; i<a; i++)
	{
		cin >> b;
		cout << (b/2) + 1 << endl;
	}
	return 0;
}
