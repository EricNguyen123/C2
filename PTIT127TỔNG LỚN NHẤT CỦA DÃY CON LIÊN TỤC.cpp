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
		long long sum = 0;
		long long max = 0;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			if (sum + a < a)
			{
				sum = a;
			}
			else
			{
				sum += a;
			}
			if (sum > max)
			{
				max = sum;
			}
		}
		if (max == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << max << endl;
		}
		
	}
	return 0;
}