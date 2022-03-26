#include<iostream>
#include<cstring>
using namespace std;
void tong(string a, string b)
{
	int m, n;
	m = a.size();
	n = b.size();
	while (m > n)
	{
		b = '0' + b;
		n++;
	}
	while (n > m)
	{
		a = '0' + a;
		m++;
	}
	string c;
	int nho = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		int s = int(a[i] - '0') + int(b[i] - '0') + nho;
		if (s < 10)
		{
			c = char(s + '0') + c;
			nho = 0;
		}
		else
		{
			c = char(s + '0' - 10) + c;
			nho = 1;
		}
	}
	if (nho == 1)
	{
		c = '1' + c;
	}
	cout << c << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a;
		string b;
		cin >> a >> b;
		tong(a, b);
	}
	return 0;
}