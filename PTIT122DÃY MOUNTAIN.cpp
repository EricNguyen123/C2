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
		int l, r;
		cin >> l >> r;
		int dem = l;
		for (int i = l; i < r; i++)
		{
			if (a[i] <= a[i + 1])
			{
				dem++;
			}
			else
			{
				break;
			}
		}
		if (dem < r - 1)
		{
			int d = dem;
			for (int i = dem; i < r; i++)
			{
				if (a[i] >= a[i + 1])
				{
					d++;
				}
				else
				{
					break;
				}
			}
			if (d < r)
			{
				cout << "No" << endl;
			}
			else
			{
				cout << "Yes" << endl;
			}
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}