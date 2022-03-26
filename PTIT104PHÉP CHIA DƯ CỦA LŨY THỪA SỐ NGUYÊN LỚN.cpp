#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a;
		long long b, m;
		cin >> a >> b >> m;
		long long d = int(a[0] - '0');
		int mm = a.size();
		for (int i = 1; i < mm; i++)
		{
			d = d % m * 10 + int(a[i] - '0');
		}
		d = d % m;
		long long e = 1;
			while (b > 1)
			{
				if (b % 2 == 0)
				{
					d = (d * d) % m;
					b /= 2;
				}
				else
				{
					e = (e * d) % m;
					d = (d * d) % m;
					b--;
					b /= 2;
				}
			}
			d = (d * e) % m;
		cout << d << endl;
	}
	return 0;
}