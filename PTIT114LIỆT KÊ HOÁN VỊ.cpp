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
			a[i] = i + 1;
			cout << a[i];
		}
		cout << " ";
		int m = n - 1;
		int k = n - 2;
		int kt = 1;
		for (int i = 1; i <= n; i++)
		{
			kt *= i;
		}
		while (kt--)
		{
			for (int i = k; i >= 0; i--)
			{
				int j = i + 1;
				
				if (a[i] < a[j])
				{
					for (int l = m; l >= 0; l--)
					{
						if (a[l] > a[i])
						{
							int tg = a[i];
							a[i] = a[l];
							a[l] = tg;
							int r = i + 1;
							int s = m;
							while (s >= r)
							{
								int tg = a[s];
								a[s] = a[r];
								a[r] = tg;
								s--;
								r++;
							}
							for (int i = 0; i < n; i++)
							{
								cout << a[i];
							}
							break;
						}
					}
					
					cout << " ";
					break;
				}
				
			}
		}
		cout << endl;
	}
	return 0;
}