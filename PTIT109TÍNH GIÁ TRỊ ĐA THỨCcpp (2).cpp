#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long q = 1000000007;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int p[2000];
		for (int i = 0; i < n; i++)
		{
			cin >> p[i];
		}
		long long du = 0;
		for (int i = 0; i < n; i++)
		{
			long long d = 1;
			for (int j = n-i-1; j >0; j--)
			{
				d = (d * x) % q;
			}
			du = (du + d * p[i]) % q;
		}
		cout << du << endl;
	}
	return 0;
}