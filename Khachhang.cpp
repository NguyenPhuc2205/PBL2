#include<iostream>
#include "Khachhang.h"
using namespace std;
Khachhang::Khachhang(string MaKH, string TenKH, string Diachi, string Gioitinh, string Sdt)
{
    this->MaKH = MaKH;
    this->TenKH = TenKH;
    this->Diachi = Diachi;
    this->Gioitinh = Gioitinh;
    this->Sdt = Sdt; 
}
Khachhang::~Khachhang(){

}

string Khachhang::get_MaKH()
{
    return this->MaKH;
}

ostream& operator<<(ostream& o, const Khachhang& k)
{
    o << k.MaKH << " " << k.TenKH << " " << k.Gioitinh << " "
    << k.Diachi << " " << k.Sdt;
    return o;
}
istream& operator>>(istream& i, Khachhang& k)
{
    cout << "Nhap ma khach hang: ";
    i >> k.MaKH;
    cout << "Nhap ten khach hang: ";
    i >> k.TenKH;
    cout << "Nhap gioi tinh khach hang: ";
    i >> k.Gioitinh;
    cout << "Nhap dia chi khach hang: ";
    i >> k.Diachi;
    cout << "Nhap so dien thoai cua khach hang: ";
    i >> k.Sdt;
    return i;
}