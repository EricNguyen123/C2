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
			cin >> a[i];
		}
		int* b;
		b = new int[n];
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					int tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		int j = 0;
		for (int i = 0; i < n; i += 2)
		{
			b[i] = a[j];
			j++;
		}
		for (int i = 1; i < n; i += 2)
		{
			b[i] = a[j];
			j++;
		}
		for (int i = 0; i < n; i ++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}