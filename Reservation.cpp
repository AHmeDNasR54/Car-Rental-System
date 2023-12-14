#include "Reservation.h"

Reservation::Reservation()
{
    cus=nullptr;
    c=nullptr;
}

Reservation::~Reservation()
{
    //dtor
}


Reservation::Reservation(int start_date,int end_date)
{
    this->start_date=start_date;
    this->end_date=end_date;
}

void Reservation::set_start(int start_date)
{
    this->start_date=start_date;
}
void Reservation::set_end(int end_date)
{
    this->end_date=end_date;
}
    void Reservation::get_details()
    {
        int start_date,end_date;
        cout<<"Enter start date\n";
        cin>>start_date;
        this->start_date=start_date;
        cout<<"Enter end date\n";
        cin>>end_date;
        this->end_date=end_date;
         }

int Reservation::get_start()
{
    return start_date;
}
int Reservation::get_end()
{
    return end_date;
}
ostream& operator<<(ostream &output, Reservation &c)
{
    output<<"Start date: "<<c.get_start()<<"\nEnd date: "<<c.get_end()<<endl;
    return output;

}
    void Reservation::ReservCar()
    {
   get_details();


    }


