#include<iostream>
using namespace std;
class CTHD
{
    private: 
        int Sl_ban;
        int Dongia;
    public:
        CTHD(int, int);
        ~CTHD();
        friend ostream& operator<<(ostream&, const CTHD&);
        friend istream& operator>>(istream&, CTHD&);
};