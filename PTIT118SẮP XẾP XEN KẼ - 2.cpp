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
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					int tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		int j = n - 1;
		int l = 0;
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				cout << a[j];
				j--;
			
			}
			else
			{
				cout << a[l];
				l++;
			}
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}