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
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		long max = -100000;
		int* b = new int[k];
		for (int i = 0; i <= n - k; i++)
		{
			long sum = 0;
			for (int j = i; j < i + k; j++)
			{
				sum += a[j];
			}
			if (sum > max)
			{
				max = sum;
				for (int j = 0; j < k; j++)
				{
					b[j] = a[j + i];
				}
			}
		}
		for (int j = 0; j < k; j++)
		{
			cout << b[j] << " ";
		}
		cout << endl;
	}
	return 0;
}