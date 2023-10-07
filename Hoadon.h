#include<iostream>
using namespace std;
class Hoadon
{
    private:
        string MaHD;
        string NgayHD;
    public:
        Hoadon(string,string);
        ~Hoadon();
        void Thongtinhoadon();
        string get_MaHD();
        friend ostream& operator<<(ostream&, const Hoadon&);
        friend istream& operator>>(istream&, Hoadon&);
};