#include<iostream>
#include<string>
#include<vector>
using namespace std;
void chuanhoa(string& nho)
{
	while (nho[0] == '0')
	{
		nho = nho.substr(1, nho.size() - 1);
	}
}
string hieu(string a, string b)
{
	int m, n;
	m = a.size();
	n = b.size();
	while (n < m)
	{
		b = '0' + b;
		n++;
	}
	string c;
	int nho = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		int s = (a[i] - '0') - (b[i] - '0') - nho;
		if (s < 0)
		{
			char v = (s + 10 + '0');
			c = v + c;
			nho = 1;
		}
		else
		{
			char v = (s + '0');
			c = v + c;
			nho = 0;
		}
	}
	chuanhoa(c);
	if (c == "")
	{
		c = "0";
	}
	return c;
}
string multiply(string num1, string num2)
{
	int len1 = num1.size();
	int len2 = num2.size();
	if (len1 == 0 || len2 == 0)
		return "0";
	vector<int> result(len1 + len2, 0);
	int i_n1 = 0;
	int i_n2 = 0;
	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';
		i_n2 = 0;
		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;

			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}
	int i = result.size() - 1;
	while (i >= 0 && result[i] == 0)
		i--;

	if (i == -1)
		return "0";

	string s = "";

	while (i >= 0)
		s += std::to_string(result[i--]);

	return s;
}
string timdu(string x, string y)
{
	if (x.size() < y.size() || (x.size() == y.size() && x < y))
	{
		return x;
	}
	string xl = "";
	string nho = "0";
	int sizex = x.size();
	int sizey = y.size();
	int p = 0;
	int j = 0;
	while (sizex > 0)
	{
		while ((xl.size() < sizey || (xl.size() == sizey && xl < y)) && j < x.size())
		{
			if (nho == "0")
			{
				xl = xl + x[j];
			}
			else
			{
				xl = nho + xl + x[j];
				nho = "0";
			}
			j++;
			sizex--;
		}
		chuanhoa(xl);
		if (xl == "")
		{
			xl = "0";
		}
		for (int i = 9; i >= 0; i--)
		{
			string a;
			a = char(i + '0');
			string b = multiply(y, a);
			int m = b.size();
			int n = xl.size();
			while (m < n)
			{
				b = "0" + b;
				m++;
			}
			while (n < m)
			{
				xl = "0" + xl;
				n++;
			}
			if (xl >= b && xl.size() == b.size())
			{
				nho = hieu(xl, b);
				break;
			}
		}
		xl = "";
	}
	return nho;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string x;
		string y;
		string z;
		cin >> x >> y >> z;
		string a = multiply(x, y);
		a = timdu(a, z);
		cout << a << endl;
	}
	return 0;
}