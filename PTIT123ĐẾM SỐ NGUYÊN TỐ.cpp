#include<iostream>
#include<stdbool.h>
using namespace std;
bool nt[100001];
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < 100001; i++)
	{
		nt[i] = true;
	}
	nt[0] = false;
	nt[1] = false;
	for (int i = 2; i < 100001; i++)
	{
		for (int j = i * 2; j < 100001; j += i)
		{
			nt[j] = false;
		}
	}
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		int dem = 0;
		for (int i = l; i <= r; i++)
		{
			if (nt[i] == true)
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}