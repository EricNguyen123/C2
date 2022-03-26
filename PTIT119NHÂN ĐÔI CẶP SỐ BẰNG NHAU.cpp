#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			int b;
			cin >> b;
			if (b == a[i - 1])
			{
				a[i - 1] *= 2;
				a[i] = 0;
			}
			else
			{
				a[i] = b;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] != 0)
			{
				cout << a[i] << " ";
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 0)
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}