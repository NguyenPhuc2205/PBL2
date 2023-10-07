#include<iostream>
#include "Khachhang.h"
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    getline(cin,s4);
    getline(cin,s5);
    Khachhang k1(s1,s2,s3,s4,s5);
    cout << k1;
    
}