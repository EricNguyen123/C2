#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	string a[100];
	int b[100];
	int j = 0;
	while (t--)
	{
		string name;
		getline(cin, name);
		while (name[0] == ' ')
		{
			name = name.substr(1, name.size() - 1);
		}
		while (name[name.size() - 1] == ' ')
		{
			name = name.substr(0, name.size() - 1);
		}
		int ii = name.find("  ");
		while (ii > -1)
		{
			name = name.replace(ii, 2, " ");
			ii= name.find("  ");
		}
		for (int i = 0; i < name.size(); i++)
		{
			if (name[i] >= 65 && name[i] <= 90)
			{
				name[i] += 32;
			}
		}
		int r = name.rfind(" ");
		string newname = "";
		for (int i = r + 1; i < name.size(); i++)
		{
			newname += name[i];
		}
		int d = 0;
		for (int i = 0; i < j; i++)
		{
			if (newname == a[i])
			{
				d = 1;
				b[i]++;
				break;
			}
		}
		if (d == 0)
		{
			a[j] = newname;
			b[j] = 1;
			j++;
		}
		cout << newname << name[0];
		for (int i = 1; i < r; i++)
		{
			if (name[i] == ' ')
			{
				cout << name[i + 1];
			}
		}
		for (int i = 0; i < j; i++)
		{
			if (newname == a[i] && b[i] != 1)
			{
				cout << b[i];
				break;
			}
		}
		cout << "@ptit.edu.vn";
		cout << endl;
	}
	return 0;
}