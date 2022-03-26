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
		int m = n + 1;
		int* a;
		a = new int[m];
		int* f;
		f = new int[n];
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			f[i] = 1;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (a[i] < a[j])
				{
					if (f[i] + 1 > f[j])
					{
						f[j] = f[i] + 1;
					}
				}
			}
		}
		int max = 0;
		for (int i = 1; i <= n; i++)
		{
			if (max < f[i])
			{
				max = f[i];
			}
		}
		cout << max << endl;
	}
	return 0;
}