#include<iostream>
#include<algorithm>
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
		int* b;
		b = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		int d1 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				d1 = i;
				break;
			}
		}
		int d2 = 0;
		for (int i = d1; i < n; i++)
		{
			if (a[i] != b[i])
			{
				d2 = i;
			}
		}
		cout << d1 + 1 << " " << d2 + 1 << endl;
	}
	return 0;
}