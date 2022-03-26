#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a;
		long long b;
		cin >> a >> b;
		long long j = int(a[0] - '0');
		int m = a.size();
		for (int i = 1; i < m; i++)
		{
			j = j % b * 10 + int(a[i] - '0');
		}
		j = j % b;
		cout << j << endl;
	}
	return 0;
}