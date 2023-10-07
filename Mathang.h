#include<iostream>
using namespace std;
class Mathang
{
    private:
        string Mahang;
        string Tenhang;
        int Sl;
    public:
        Mathang(string,string,int);
        ~Mathang();
        string get_Mahang();
        friend ostream& operator<<(ostream&, const Mathang&);
        friend istream& operator>>(istream&, Mathang&);
};
