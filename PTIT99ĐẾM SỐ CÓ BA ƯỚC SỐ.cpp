#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
bool kt(long m)
{
		for (long i = 2; i <= sqrt(m); i++)
		{
			if (m % i == 0)
			{
				return false;
			}
		}
		return true;
}
void s(long n)
{
	int dem = 0;
	long m = sqrt(n);
	if (m >= 2)
	{
		dem++;
	}
	for (long i = 3; i <= m; i += 2)
	{
		if (kt(i) == true)
		{
			dem++;
		}
	}
	cout << dem << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		s(n);
	}
	return 0;
}