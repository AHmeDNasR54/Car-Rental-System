#ifndef SYSTEM_H
#define SYSTEM_H
#include"Car.h"
#include"Customer.h"
#include"Reservation.h"
#include"RentalAgreement.h"
#include"Invoice.h"
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;


class System
{
private:
    Car *cars;
    Customer *cus;
    Reservation *r;
    RentalAgreement *rental;
    Invoice *in;
    public:
        int countCAR=0;
        int countCUS=0;
        int countRESERV=0;
        int countRENT=0;
        int countINVOICE=0;
        System();
        void AddCar();
        void AddCustomer();
        void RentCar();
        void ReturnCar();
        void show_available();
        void RentalHistory();
        void GenaraiteReport ();
        virtual ~System();

    protected:

};

#endif // SYSTEM_H
