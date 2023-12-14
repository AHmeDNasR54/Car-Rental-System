#ifndef RESERVATION_H
#define RESERVATION_H
#include"Car.h"
#include"Customer.h"
#include<iostream>
using namespace std;

class Reservation
{
private:
    int start_date,end_date;
public:

    Customer *cus;
    Car *c;
    Reservation();
    Reservation(int start_date,int end_date);
    void set_start(int start_date);
    void set_end(int end_date);
    void get_details();
    int get_start();
    int get_end();
    friend ostream& operator<<(ostream &output, Reservation &c);
    bool operator ==(Reservation r)
    {
        return(start_date==r.get_start()&&end_date==r.get_end());
    }
    void ReservCar();

    virtual ~Reservation();

protected:


};

#endif // RESERVATION_H
