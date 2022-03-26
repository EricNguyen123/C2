#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		if (c == 0)continue;
		long long dua = a % c;
		long long dub = b % c;
			long long n, k, du;
			n = (c / dua) + 1;
			k = dub / n;
			du = dub % n;
			dua = ((k * (n * dua) % c) % c + (du * dua)) % c;
		cout << dua << endl;
	}
	return 0;
}