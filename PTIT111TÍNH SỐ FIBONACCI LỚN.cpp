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
	long long p = pow(10, 9) + 7;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 2; i <= n; i++)
		{
			f[i] = (f[i - 1] % p + f[i - 2] % p) % p;
		}
		cout << f[n] << endl;
	}
	return 0;
}