#include "DList.h"
#include "DNode.h"
#include "Customers.h"
#include "Output.h"
#include <iostream>
using namespace std;
Customers::Customers(const String& ID, const String& Name, bool Gender, const String& Address, const String& Phone)
    : ID(ID), Name(Name), Gender(Gender), Address(Address), Phone(Phone)
{}
Customers::~Customers()
{}
String Customers::GetID() const
{
    return this->ID;
}
void Customers::SetID(String new_ID)
{
    this->ID = new_ID;
}
String Customers::GetName() const
{
    return this->Name;
}
void Customers::SetName(String new_Name)
{
    this->Name = new_Name;
}
bool Customers::GetGender() const
{
    return this->Gender;
}
void Customers::SetGender(bool new_Gender)
{
    this->Gender = new_Gender;
}
String Customers::GetAddress() const
{
    return this->Address;
}
void Customers::SetAddress(String new_Address)
{
    this->Address = new_Address;
}
String Customers::GetPhone() const
{
    return this->Phone;
}
void Customers::SetPhone(String new_Phone)
{
    this->Phone = new_Phone;
}