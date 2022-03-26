#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
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
    void chuahoa1()
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
    void chuanhoa2()
    {
        while (name[0] == ' ')
        {
            name = name.substr(1, name.size() - 1);
        }
        while (name[name.size() - 1] == ' ')
        {
            name = name.substr(0, name.size() - 1);
        }
        int i = name.find("  ");
        while (i > -1)
        {
            name = name.replace(i, 2, " ");
            i = name.find("  ");
        }
        for (int j = 0; j < name.size(); j++)
        {
            if (name[j] >= 65 && name[j] <= 90)
            {
                name[j] += 32;
            }
        }
        name[0] -= 32;
        for (int j = 0; j < name.size(); j++)
        {
            if (name[j] == ' ')
            {
                name[j + 1] -= 32;
            }
        }
    }
    friend istream& operator >>(istream& is, SinhVien& a)
    {
        getline(is, a.name);
        getline(is, a.nameclass);
        getline(is, a.date);
        is >> a.gpa;
        return is;
    }
    friend ostream& operator<<(ostream& os, SinhVien a)
    {
        a.chuahoa1();
        a.chuanhoa2();
        os << a.msv << " " << a.name << " " << a.nameclass << " " << a.date << " ";
        os << fixed << setprecision(2) << a.gpa;
        return os;
    }
};
int main()
{
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}

