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
		cin >> a;
		int n = a.length();
		int l = n - 2;
		int m = n - 1;
		int th = 0;
		char max = '0';
		for (int i = l; i >= 0; i--)
		{
			if (a[i] > a[i + 1])
			{
				int d = i + 1;
				for (int j = m; j >= i; j--)
				{
					if (a[j] < a[i] && a[j] >= max)
					{
						max = a[j];
						d = j;
					}
				}
				th = 1;
				char tg = a[i];
				a[i] = a[d];
				a[d] = tg;
				if (a[0] == '0')
				{
					th = 0;
				}
				break;
			}
		}
		if (th == 1)
		{
			cout << a << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}