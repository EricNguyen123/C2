#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long p = 1000000007;
	while (t--)
	{
		int a, b;
		cin >> a >> b; 
		int c = a - b;
		int* d;
		int* e;
		d = new int[c];
		e = new int[c];
		for (int i = 0; i < c; i++)
		{
			d[i] = b + 1;
			b++;
			e[i] = i + 1;;
		}
		int f[1000];
		int ff[1000];
		int l = 0;
		for (int i = 0; i < c; i++)
		{
			int dem = 0;
			while (e[i] % 2 == 0)
			{
				e[i] /= 2;
				dem++;
			}
			if (dem > 0)
			{
				int th = 0;
				for (int j = 0; j < l; j++)
				{
					if (f[j] == 2)
					{
						th = 1;
						ff[j]+=dem;
						break;
					}
				}
				if (th == 0)
				{
					f[l] = 2;
					ff[l] = dem;
					l++;
				}
			}
			for (int j = 3; j <= sqrt(e[i]); j += 2)
			{
				int dem = 0;
				while (e[i] % j == 0)
				{
					e[i] /= j;
					dem++;
				}
				if (dem > 0)
				{
					int th = 0;
					for (int jj = 0; jj < l; jj++)
					{
						if (f[jj] == j)
						{
							th = 1;
							ff[jj] += dem;
							break;
						}
					}
					if (th == 0)
					{
						f[l] = j;
						ff[l] = dem;
						l++;
					}
				}
			}
			if (e[i] > 2)
			{
				f[l] = e[i];
				ff[l] = 1;
				l++;
			}
		}

		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < c; j++)
			{
				while (d[j] % f[i] == 0 && ff[i] != 0)
				{
					ff[i]--;
					d[j] /= f[i];
				}
			}
		}
		long du = 1;
		for (int i = 0; i < c; i++)
		{
			du = (du * d[i]) % p;
		}
		cout << du << endl;
	}
	return 0;
}