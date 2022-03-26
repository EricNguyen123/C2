#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, s;
		cin >> n >> s;
		int* a;
		a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int th = 0;
		for (int i = 0; i < n; i++)
		{
			int b = a[i] + s;
			int d = -1;
			if (b <= a[n - 1])
			{
				int l = 0, r = n - 1;
				
				while (l <= r)
				{
					int mid =  (r + l) / 2;
					if (b < a[mid])
					{
						r = mid - 1;
					}
					else if (b > a[mid])
					{
						l = mid + 1;
					}
					else
					{
						th = 1;
						d = mid;
						break;
					}
				}
				if (d != -1)
				{
					cout << 1 << endl;
					break;
				}
			}
		}
		if (th == 0)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}