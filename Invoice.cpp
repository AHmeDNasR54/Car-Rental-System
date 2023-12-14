#include "Invoice.h"

Invoice::Invoice()
{
    r=nullptr;
}

Invoice::~Invoice()
{
    //dtor
}
void Invoice::set_charge(double charge)
{
    rental_charge=charge;
}
void Invoice::set_taxes(double taxes)
{
    rental_taxes=taxes;
}
void Invoice::set_TotalAmount(double total_amount)
{
    this->total_amount=total_amount;
}
double Invoice::get_charge()
{
    rental_charge=((r->get_period())* (r->get_rate()));
    return rental_charge;
}
double Invoice::get_taxes()
{
    return rental_taxes;
}
double Invoice::get_total()
{
    total_amount=rental_charge+rental_taxes+r->get_charge();
    return total_amount;
}
     ostream& operator<<(ostream &output, Invoice &i)
    {
        output<<"Rental charge: "<<i.get_charge()<<"\nRental taxes "<<i.get_taxes()<<"\nTotal amount : "<<i.get_total()<<endl;
        return output;
    }
                double Invoice::calTotalAmount()
                {
                    return rental_charge-rental_taxes;
                }

