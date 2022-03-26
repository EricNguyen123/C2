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
		
		long long d = 1;
		for (int i = 0; i < n; i++)
		{
			long long max = 1;
			for (int j = i; j < n; j++)
			{
				max *= a[j];

				if (d < max)
				{
					d = max;
				}
			}
				
			
		}
		cout << d << endl;
	}
	return 0;
}