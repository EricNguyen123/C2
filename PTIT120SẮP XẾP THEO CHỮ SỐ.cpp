#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool kt(int a, int b)
{
	int n = 10, m = 10;
	while (a / n > 0) n *= 10;
	while (b / m > 0) m *= 10;
	return a * m + b > b * n + a;
}
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
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (kt(a[i], a[j]) == true)
				{
					int tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		for (int i = n - 1; i >= 0; i--)
		{
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}