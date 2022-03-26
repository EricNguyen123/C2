#include<iostream>
using namespace std;
int ucln(int a, int b)
{
	int c, d;
	if (a < b)
	{
		c = b;
		d = a;
	}
	else
	{
		c = a;
		d = b;
	}
	while (d != 0)
	{
		int tg = c % d;
		c = d;
		d = tg;
	}
	return c;
}
int bcnn(int a, int b)
{
	return a * b / ucln(a, b);
}

int dem(int c, int m, int n)
{
	int i = m / c;
	if (i * c < m)
	{
		i++;
	}
	int j = n / c;
	int dem = (j - i) + 1;
	return dem;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		if (m > n)
		{
			int tg = m;
			m = n;
			n = tg;
		}
		int c = bcnn(a, b);
		cout << dem(a, m, n) + dem(b, m, n) - dem(c, m, n) << endl;

	}
	return 0;
}