#include<iostream>
using namespace std;

class PhanSo
{
protected:
	long long tu, mau;
public:
	void rutgon()
	{
		long long c, d;
		if (tu > mau)
		{
			c = tu;
			d = mau;
		}
		else
		{
			c = mau;
			d = tu;
		}
		while (d != 0)
		{
			long long tg = c % d;
			c = d;
			d = tg;
		}
		tu /= c;
		mau /= c;

	}
	PhanSo(long long tu, long long mau)
	{
		rutgon();
	}
	friend istream& operator>>(istream& os, PhanSo& r);
	friend ostream& operator<<(ostream& os, PhanSo& r);
};
ostream& operator<<(ostream& os, PhanSo& r)
{
	os << r.tu << "/" << r.mau;
	return os;
}
istream& operator>>(istream& is, PhanSo& r)
{
	is >> r.tu;
	is >> r.mau;
	return is;
}
int main() {
	PhanSo p(1, 1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

