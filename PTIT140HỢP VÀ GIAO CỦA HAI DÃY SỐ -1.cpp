#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int* a;
		int* b;
		a = new int[n];
		b = new int[m];
		nhap(a, n);
		nhap(b, m);
		int l = m + n;
		int* c;
		c = new int[l];
		int* d;
		d = new int[l];
		int d1 = 0, d2 = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i] == b[j])
				{
					int d3 = 0;
					for (int k = 0; k < d1; k++)
					{
						if (a[i] == c[k])
						{
							d3 = 1;
							break;
						}
					}
					if (d3 == 0)
					{
						c[d1] = a[i];
						d1++;
						break;
					}
				}
			}
		}
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != c[dem])
			{
				d[d2] = a[i];
				d2++;
			}
			else
			{
				dem++;
			}
		}
		dem = 0;
		for (int i = 0; i < m; i++)
		{
				d[d2] = b[i];
				d2++;
		}
		sort(c, c + d1);
		sort(d, d + d2);
		for (int i = 0; i < d2; i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < d1; i++)
		{
			cout << c[i] << " ";
		}
		cout << endl;
	}
	return 0;
}