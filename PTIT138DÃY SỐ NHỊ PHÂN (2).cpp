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
		int* b;
		a = new int[n];
		b = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			int d = 0;
			int sa = 0;
			int sb = 0;
			for (int j = i; j < n; j++)
			{
				sa += a[j];
				sb += b[j];
				if (sa == sb)
				{
					d = j - i + 1;
					if (d > max)
					{
						max = d;
					}
				}
			}

		}
		cout << max << endl;
	}
	return 0;
}