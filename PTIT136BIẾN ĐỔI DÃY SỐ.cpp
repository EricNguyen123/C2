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
		int d = 0;
		int r = n - 1;
		int l = 0;
		while (l <= r)
		{
			if (a[l] == a[r])
			{
				l++;
				r--;
			}
			else if (a[l] < a[r])
			{
				l++;
				a[l] += a[l - 1];
				d++;
			}
			else if (a[l] > a[r])
			{
				r--;
				a[r] += a[r + 1];
				d++;
			}
		}
		cout << d << endl;
	}
	return 0;
}