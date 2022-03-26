#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int dd = m * n;
		int** a;
		a = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		int d = 0;
		int cot = m - 1;
		int hang = n - 1;
		int gt;
		if (m > n)
		{
			gt = n;
		}
		else
		{
			gt = m;
		}
		int dem = 0;
		while (d <= gt / 2)
		{
			int bd, kt;
			bd = d;
			kt = d;
			int tg = a[bd][kt];
			int tg1;
			//cout << gt++ << ":";
			for (int i = d; i < cot; i++)
			{
				tg1 = a[d][i + 1];
				a[d][i + 1] = tg;
				tg = tg1;
			}
			a[bd][kt] = tg;
			dem += cot - d + 1;
			if (dem == dd)
			{
				
				break;
			}
			//cout << tg << ":";
			for (int i = d + 1; i <= hang; i++)
			{
				tg1 = a[i][cot];
				a[i][cot] = tg;
				tg = tg1;
			}
			a[bd][kt] = tg;
			dem += hang - d;
			if (dem == dd)
			{
				
				break;
			}
			//cout << gt++ << ":";
			for (int i = cot - 1; i >= d; i--)
			{
				tg1 = a[hang][i];
				a[hang][i] = tg;
				tg = tg1;
			}
			a[bd][kt] = tg;
			dem += cot - d;
			if (dem == dd)
			{
				
				break;
			}
			//cout << gt++ << ":";
			for (int i = hang - 1; i >= d + 1; i--)
			{
				tg1 = a[i][d];
				a[i][d] = tg;
				tg = tg1;
			}
			//cout << tg << ":";
			a[bd][kt] = tg;
			dem += hang - d - 1;
			if (dem == dd)
			{
				
				break;
			}
			d++;
			cot--;
			hang--;

		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
			
		}
		cout << endl;
	}
	return 0;
}