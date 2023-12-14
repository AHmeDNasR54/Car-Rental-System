#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
using namespace std;

class Customer
{
        private:
            string name,address,phone;
            int id;

    public:
        Customer();
    Customer(string name,string address,string phone);
    void get_details();
    int get_ID();
    string get_name();
    string get_phone();
    string get_address();

 friend ostream& operator<<(ostream &output, Customer &c);
 bool operator ==(Customer c)
    {
        return(name==c.get_name()&&address==c.get_address()&&phone==c.get_phone());
    }

        virtual ~Customer();

    protected:

};

#endif // CUSTOMER_H
