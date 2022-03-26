#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>
#define a() a
using namespace std;
class SinhVien
{
private:
    string msv;
    string name;
    string nameclass;
    string date;
    float gpa;
public:
    SinhVien()
    {
        msv = "B20DCCN001";
    }
    void chuanhoa()
    {
        if (date[1] == '/')
        {
            date.insert(0, "0");
        }
        if (date[4] == '/')
        {
            date.insert(3, "0");
        }
    }
    void nhapvao()
    {
        getline(cin, name);
        getline(cin, nameclass);
        getline(cin, date);
        cin >> gpa;
    }
    void inra()
    {
        chuanhoa();
        cout << msv << " " << "Nguyen Van A" << " " << nameclass << " " << date << " ";
        cout << fixed << setprecision(2) << gpa;
    }
};
void nhap(SinhVien& a)
{
    a.nhapvao();
}
void in(SinhVien a)
{
    a.inra();
}
int main()
{
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}