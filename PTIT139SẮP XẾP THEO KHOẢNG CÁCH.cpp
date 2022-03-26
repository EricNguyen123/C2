#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int* a;
		int* b;
		a = new int[n];
		b = new int[n];
		int l = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			int d = 0;
			for (int j = 0; j < l; j++)
			{
				if (abs(a[i] - x) == b[j])
				{
					d = 1;
					break;
				}
			}
			if (d == 0)
			{
				b[l] = abs(a[i] - x);
				l++;
			}
		}
		for (int i = 0; i < l; i++)
		{
			for (int j = i + 1; j < l; j++)
			{
				if (b[i] > b[j])
				{
					int tg = b[i];
					b[i] = b[j];
					b[j] = tg;
					
				}
			}
		}
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (abs(a[j] - x) == b[i])
				{
					cout << a[j] << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}