#include<iostream>
#include<iomanip>
#include<math.h>
#pragma once
using namespace std;

class PhanSo
{
private:
	long long tu, mau;
public:
	void rutgon();
	PhanSo(long long tu, long long mau)
	{
		rutgon();
	}
	friend PhanSo operator +(PhanSo q, PhanSo p);
	friend istream& operator>>(istream& is, PhanSo& r);
	friend ostream& operator<<(ostream& os, PhanSo r);
	
};
void PhanSo::rutgon()
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
PhanSo operator +(PhanSo q, PhanSo p)
{
	PhanSo s(1, 1);
	s.tu = p.tu * q.mau + p.mau * q.tu;
	s.mau = p.mau * q.mau;
	s.rutgon();
	return s;
}
ostream& operator <<(ostream& os, PhanSo r )
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
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
