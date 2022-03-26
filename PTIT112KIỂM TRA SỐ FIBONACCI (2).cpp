#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long f[1000];
	f[0] = 0;
	f[1] = 1;
	int i = 2;
	long long p = pow(10, 9) + 7;
	while (t--)
	{
		long long n;
		cin >> n;
		long long* a;
		a = new long long[n];
		for (int j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		for (int j = 0; j < n; j++)
		{
			if (f[i - 1] < a[j])
			{
				while (f[i - 1] < a[j])
				{
					f[i] = f[i - 1] + f[i - 2];
					i++;
				}
				if (f[i - 1] == a[j])
				{
					cout << a[j] << " ";
				}
			}
			else
			{
				int d = 0;
				for (int jj = 0; jj <= i; jj++)
				{
					if (f[jj] == a[j])
					{
						d = 1;
						cout << a[j] << " ";
						break;
					}
				}
			}
		}
		cout << endl;

	}
	return 0;
}