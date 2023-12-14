#ifndef INVOICE_H
#define INVOICE_H
#include"RentalAgreement.h"
#include<iostream>
using namespace std;

class Invoice
{
private:
    double rental_charge,rental_taxes,total_amount;
    public:
        RentalAgreement *r;
         Invoice();
                Invoice(double charge,double taxes,double total_amount)
                {
                    rental_charge=charge;
                    rental_taxes=taxes;
                    this->total_amount=total_amount;
                }
                void set_charge(double charge);
                void set_taxes(double taxes);
                void set_TotalAmount(double total_amount);
                double get_charge();
                double get_taxes();
                double get_total();
                double calTotalAmount();
                friend ostream& operator<<(ostream &output, Invoice &i);
               double operator -(Invoice inv)
                {
                    inv=*this;
                  return inv.get_total();
                }
                double operator +(Invoice in)
                {
                    in=*this;
                    return in.get_charge();
                }
                bool operator ==(Invoice in)
    {
        return(rental_charge==in.get_charge()&&rental_taxes==in.get_taxes()&&total_amount==in.calTotalAmount());
    }

        virtual ~Invoice();

    protected:

};

#endif // INVOICE_H
