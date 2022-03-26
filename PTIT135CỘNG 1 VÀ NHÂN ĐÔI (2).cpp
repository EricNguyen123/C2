#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long max = 0;
		long sum = 0;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			int dem = 0;
			while (a > 0)
			{
				if (a % 2 == 0)
				{
					a /= 2;
					dem++;
				}
				else
				{
					a -= 1;
					sum += 1;
				}
			}
			if (dem > max)
			{
				max = dem;
			}
		}
		cout << max + sum << endl;
	}
	return 0;
}