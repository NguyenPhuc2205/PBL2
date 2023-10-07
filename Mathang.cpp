#include <iostream>
#include "Mathang.h"
using namespace std;
Mathang::Mathang(string Mahang, string Tenhang, int Sl)
{
    this->Mahang = Mahang;
    this->Tenhang = Tenhang;
    this->Sl = Sl;
}
Mathang::~Mathang(){

}

string Mathang::get_Mahang()
{
    return this->Mahang;
}

ostream& operator<<(ostream& o, const Mathang& MH)
{
    o << MH.Mahang << " " << MH.Tenhang << " " << MH.Sl;
    return o;
}

istream& operator>>(istream& i, Mathang& MH)
{
    cout << "Ma cua mat hang la: "; 
    i >> MH.Mahang;
    cout << "Ten cua mat hang la: "; 
    i >> MH.Tenhang;
    cout << "So luong cua mat hang la: "; 
    i >> MH.Sl;
}