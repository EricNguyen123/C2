#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		double* a;
		a = new double[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		double sum = 0;
		int m = n - k + 1;
		int d = 0;
		for (int i = 0; i < m; i++)
		{
			double s = 0;
			for (int j = i; j < k + i; j++)
			{
				s += a[j];
			}
			if (sum <= (double)(s/k))
			{
				sum = s / k;
				d = i;
			}
		}
		for (int j = d; j < k + d; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}