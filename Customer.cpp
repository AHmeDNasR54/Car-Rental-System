#include "Customer.h"
#include<iostream>
using namespace std;
Customer::Customer()
{
    //ctor
}

Customer::~Customer()
{
    //dtor
}
Customer::Customer(string name,string address,string phone)
{
    this->name=name;
    this->address=address;
    this->phone=phone;

}
void Customer::get_details()
{
    string name;
    string address;
    string phone;
    int id;
    cout<<"please fill this form:\n";
    cout<<"--->Name:";
    cin>>name;
    this->name=name;
    cout<<"--->Address: ";
    cin>>address;
    this->address=address;
    cout<<"--->Phone: ";
    cin>>phone;
    this->phone=phone;
    cout<<"--->ID: ";cin>>id;this->id=id;

}
string Customer::get_name()
{
    return name;
}
string Customer::get_phone()
{
    return phone;
}
string Customer::get_address()
{
    return address;
}
int Customer::get_ID()
{
    return id;
}
  ostream& operator<<(ostream &output, Customer& c)
    {
        output<<"Name: "<<c.get_name()<<"\n"
        <<"Address: "<<c.get_address()<<endl
        <<"Phone: "<<c.get_phone()<<endl
        <<"ID: "<<c.get_ID()<<endl;
        return output;
    }
