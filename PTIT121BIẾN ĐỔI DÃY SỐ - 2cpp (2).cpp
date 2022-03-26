#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* a;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int* b;
		b = new int[n];
		int m = n - 1;
		b[0] = a[0] * a[1];
		b[m] = a[m] * a[m - 1];
		for (int i = 1; i < m; i++)
		{
			b[i] = a[i - 1] * a[i + 1];
		}
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}