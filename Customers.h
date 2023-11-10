#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include <iostream>
#include "String.h"
#include "DList.h"
using namespace std;
class Customers
{
    private:
        String ID;
        String Name;
        bool Gender;
        String Address;
        String Phone;
    public:
        Customers(const String&, const String&, bool, const String&, const String&);
        ~Customers();
        String GetID() const;
        String GetName() const;
        bool GetGender() const;
        String GetAddress() const;
        String GetPhone() const;
        void SetID(String);
        void SetName(String);
        void SetGender(bool);
        void SetAddress(String);
        void SetPhone(String);
};
#endif