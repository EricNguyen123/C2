#include<iostream>
#include<stdbool.h>
using namespace std;
int a[20];
void th(int l,int n,int k)
{
	for (int i = a[l - 1] + 1; i <= n - k + l; i++)
	{
		a[l] = i;
		if (l == k)
		{
			for (int j = 1; j <= k; j++)
			{
				cout << a[j];
			}
			cout << " ";
		}
		else
		{
			th(l+1, n, k);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		a[0] = 0;
		th(1, n, k);
		cout << endl;
	}

	return 0;
}