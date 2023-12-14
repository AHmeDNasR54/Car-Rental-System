#include "RentalAgreement.h"

RentalAgreement::RentalAgreement()
{
reserv=nullptr;
r=nullptr;
}

RentalAgreement::~RentalAgreement()
{
    //dtor
}
RentalAgreement::RentalAgreement(double period,double rate,double charge)
{
    rental_period=period;
    rental_rate=rate;
    insurance_charge=charge;
}
void RentalAgreement::set_rate(double rate)
{
    rental_rate=rate;
}
void RentalAgreement::set_period(double period)
{
    rental_period=period;

}
 void RentalAgreement::set_charge(double charge)
{
    insurance_charge=charge;
}
void RentalAgreement::get_details()
{
    double period, rate, charge;

    cout<<"Enter period : ";cin>>period;rental_period=period;
    cout<<"Enter rate : ";cin>>rate;rental_rate=rate;
    cout<<"Enter insurance charge : ";cin>>charge;insurance_charge=charge;
}

double RentalAgreement::get_period()
{
    return rental_period;
}
double RentalAgreement::get_rate()
{
    return rental_rate;
}
double RentalAgreement::get_charge()
{
    return insurance_charge;
}
ostream& operator<<(ostream &output, RentalAgreement &r)
{
    output<<"Rental period: "<<r.get_period()<<"\nRental rate: "<<r.get_rate()<<"\nInsurance charge: "<<r.get_charge()<<endl;
    return output;
}
       /* double RentalAgreement::calculate()
        {
            return (rental_period*rental_rate)+i.get_charge();
        }*/



