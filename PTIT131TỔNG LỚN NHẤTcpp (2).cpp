#include<iostream>
using namespace std;
int sum(int a[], int b[], int n, int m)
{
	int s = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
		int t = 0;
		for (int j = i + 1; j < m; j++)
		{
			t += b[j];
		}
		if (sum < s + t)
		{
			sum = s + t;
		}
	}
	return sum;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int* a;
		a = new int[n];
		int* b;
		b = new int[m];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		int max = sum(a, b, n, m);
		int min = sum(b, a, m, n);
		if (max < min)
		{
			max = min;
		}
		cout << max << endl;
	}
	return 0;
}