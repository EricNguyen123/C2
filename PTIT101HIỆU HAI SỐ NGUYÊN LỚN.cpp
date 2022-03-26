#include<iostream>
#include<cstring>
using namespace std;
void hieu(string a, string b)
{
	int m, n;
	m = a.size();
	n = b.size();
	while (n < m)
	{
		b = '0' + b;
		n++;
	}
	string c;
	int nho = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		int s = (a[i] - '0') - (b[i] - '0') - nho;
		if (s < 0)
		{
			char v = (s + 10 + '0');
			c = v + c;
			nho = 1;
		}
		else
		{
			char v = (s + '0');
			c = v + c;
			nho = 0;
		}
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
		cin >> a;
		cin >> b;
		int m, n;
		m = a.size();
		n = b.size();
		
		if (m > n)
		{
			hieu(a, b);	
		}
		else if (n > m)
		{
			hieu(b, a);
		}
		else
		{
			int d = 0;
			for (int i = 0; i < m; i++)
			{
				if (a[i] > b[i])
				{
					d = 1;
					hieu(a, b);
					break;
				}
				else if(a[i] < b[i])
				{
					d = 1;
					hieu(b, a);
					break;
				}
			}
			if (d == 0)
			{
				hieu(b, a);
			}
		}
	}
	return 0;
}