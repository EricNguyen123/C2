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
		int** a;
		a = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int d = 0;
				for (int l = 0; l < n; l++)
				{
					if (a[i][j] == a[i - 1][l])
					{
						d = 1;
						break;
					}
				}
				if (d == 0)
				{
					a[i][j] = 0;
				}
			}
		}
		int* b;
		b = new int[n];
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[n - 1][i] != 0)
			{
				int d = 0;
				for (int j = 0; j < k; j++)
				{
					if (a[n - 1][i] == b[j])
					{
						d = 1;
						break;
					}
				}
				if (d == 0)
				{
					b[k] = a[n - 1][i];
					k++;
				}
			}
		}
		cout << k << endl;
	}
	return 0;
}