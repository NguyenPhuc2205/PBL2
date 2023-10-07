#include<iostream>
#include "CTHD.h"
using namespace std;
CTHD::CTHD(int Sl_ban, int Dongia)
{
    this->Sl_ban = Sl_ban;
    this->Dongia = Dongia;
}
CTHD::~CTHD()
{}
ostream& operator<<(ostream& o, const CTHD& C)
{
    o << C.Sl_ban << " " << C.Dongia;
    return o;
}
istream& operator>>(istream& i, CTHD& C)
{
    cout << "So luong da ban: ";
    i >> C.Sl_ban;
    cout << "Don gia :";
    i >> C.Dongia;
}