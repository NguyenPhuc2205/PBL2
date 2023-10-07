#include<iostream>
#include "Hoadon.h"
using namespace std;
Hoadon::Hoadon(string MaHD, string NgayHD)
{
    this->MaHD = MaHD;
    this->NgayHD = NgayHD;
}
Hoadon::~Hoadon(){

}

string Hoadon::get_MaHD()
{
    return this->MaHD;
}

ostream& operator<<(ostream& o, const Hoadon& HD)
{
    o << HD.MaHD << " " << HD.NgayHD << endl;
    return o;
}
istream& operator>>(istream& i, Hoadon& HD)
{
    cout << "Nhap ma hoa don: ";
    i >> HD.MaHD;
    cout << "Nhap ngay cua hoa don: ";
    i >> HD.NgayHD;
    return i;
}