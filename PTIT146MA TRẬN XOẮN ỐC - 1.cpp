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
			//cout << gt++ << ":";
			for (int i = d; i <= cot; i++)
			{
				cout << a[d][i] << " ";
			}
			dem += cot - d + 1;
			if (dem == dd)
			{
				break;
			}
			//cout << gt++ << ":";
			for (int i = d + 1; i <= hang; i++)
			{
				cout << a[i][cot] << " ";
			}
			dem += hang - d;
			if (dem == dd)
			{
				break;
			}
			//cout << gt++ << ":";
			for (int i = cot - 1; i >= d; i--)
			{
				cout << a[hang][i] << " ";																		
			}
			dem += cot - d;
			if (dem == dd)
			{
				break;
			}
			//cout << gt++ << ":";
			for (int i = hang - 1; i >= d + 1; i--)
			{
				cout << a[i][d] << " ";
			}
			dem += hang - d - 1;
			if (dem == dd)
			{
				break;
			}
			d++;
			cot--;
			hang--;
			
		}
		cout << endl;
	}
	return 0;
}