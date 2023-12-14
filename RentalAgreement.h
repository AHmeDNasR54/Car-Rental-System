#ifndef RENTALAGREEMENT_H
#define RENTALAGREEMENT_H
//#include"Invoice.h"
#include"Car.h"
#include"Customer.h"
#include"Reservation.h"
#include<iostream>
using namespace std;

class RentalAgreement
{
   private:
    double rental_period,rental_rate,insurance_charge;

    public:
        Reservation *reserv;
//               Invoice i;
               Reservation *r;

        RentalAgreement();
        RentalAgreement(double period,double rate,double charge);
        void set_period(double period);
        void set_rate(double rate);
        void set_charge(double charge);
        void get_details();
        double get_period();
        double get_rate();
        double get_charge();
        double calculate();
        friend ostream& operator<<(ostream &output, RentalAgreement &r);
      bool operator ==(RentalAgreement r)
    {
        return(rental_period==r.get_period()&&rental_rate==r.get_rate()&&insurance_charge==r.get_charge());
    }
      virtual ~RentalAgreement ();
};

#endif // RENTALAGREEMENT_H
