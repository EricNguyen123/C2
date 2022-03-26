#include<iostream>
#include<cmath>
#include<stdbool.h>
using namespace std;
bool nt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int d1 = 0;
		int d2 = 0;
		while (n % 2 == 0)
		{
			d2++;
			n /= 2;
		}
		if (d2 > 1)
		{
			cout << 0 << endl;
			continue;
		}
		else 
		{
			if (d2 == 1)
			{
				d1++;
			}
			
			int d3 = 0;
			for (int j = 3; j <= sqrt(n); j += 2)
			{
				d2 = 0;
				while (n % j == 0)
				{
					n /= j;
					d2++;
				}
				if (d2 > 1)
				{
					d3 = 1;
					break;
				}
				else if (d2 == 1)
				{
					d1++;
				}
			}
			if (d3 == 1)
			{
				cout << 0 << endl;
				continue;
			}
			else
			{
				if (n > 2)
				{
					d1++;
				}
				if (d1 == 3)
				{
					cout << 1 << endl;
					continue;
				}
				else
				{
					cout << 0 << endl;
				}
			}
		}
	}
	return 0;
}
