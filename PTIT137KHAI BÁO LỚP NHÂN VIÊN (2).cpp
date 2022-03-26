#include<iostream>
#include<string>
#include<cstring>
#define a() a
using namespace std;
class NhanVien
{
private:
    string mnv;
    string name;
    string gioitinh;
    string date;
    string adress;
    string mthue;
    string ngaykihopdong;
public:
    NhanVien()
    {
        mnv = "00001";
    }
    friend istream& operator>>(istream& is, NhanVien& a)
    {
        getline(is, a.name);
        getline(is, a.gioitinh);
        getline(is, a.date);
        getline(is, a.adress);
        getline(is, a.mthue);
        getline(is, a.ngaykihopdong);
        return is;

    }
    friend ostream& operator<<(ostream& os, NhanVien a)
    {
        os << a.mnv << " " << a.name << " " << a.gioitinh << " " << a.date << " " << a.adress << " " << a.mthue << " " << a.ngaykihopdong;
        return os;
    }
};
int main() {
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}