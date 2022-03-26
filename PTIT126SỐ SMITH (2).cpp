#include<iostream>
#include<stdbool.h>
#include<cmath>
using namespace std;
bool nt(int n)
{
	if (n == 0 || n == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int sum(int n)
{
	int s = 0;
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}
int sum1(int n)
{
	int s = 0;
	while (n % 2 == 0)
	{
		s += 2;
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			s += sum(i);
			n /= i;
		}
	}
	if (n > 2)
	{
		s += sum(n);
	}
	return s;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (nt(n) == true)
		{
			cout << "NO" << endl;
		}
		else
		{
			
			if (sum(n) == sum1(n))
			{
				
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}