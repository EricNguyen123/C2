#include<iostream>
#include<cmath>


using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		if (n % 2 == 0)
		{
			int d = 0;
			while (n % 2 == 0)
			{
				n /= 2;
				d++;
			}
			int dem = d;
			for (int i = 3; i <= sqrt(n); i += 2)
			{
				if (n % i == 0)
				{
					dem += 2 * d;
				}
			}
			if (sqrt(n) == (int)sqrt(n) && n != 0)
			{
				dem -= d;
			}
			if (n != 0)
			{
				dem += d;
			}
			cout << dem << endl;
		}
		else
		{
			cout << 0 << endl;
		}
		
	}
	return 0;
}