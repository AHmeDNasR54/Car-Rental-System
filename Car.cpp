#include "Car.h"

Car::Car()
{
    //ctor

}

Car::~Car()
{
    //dtor
}
Car::Car(string make,string model,bool availability,int year,int ID,double price)
{
    this->make=make;
    this->model=model;
    this->availability=availability;
    this->year=year;
    this->ID=ID;
    this->price=price;

}
        void Car::set_availability(bool f)
        {
            availability=f;
        }


string Car::get_make()
{
    return make;
}
string Car::get_model()
{
    return model;
}
/*string Car::get_color()
{
    return color;
}*/
bool Car::get_availability()
{
    return availability;
}
int Car::get_year()
{
    return year;
}
int Car::get_id()
{
    return ID;
}
double Car::get_price()
{
    return price;
}
void Car::get_details()
{
   string make, model;bool availability;int year;double price;int id;
        cout<<"Please,fill this form\n";
        cout<<"-->Make: ";cin>>make;this->make=make;
        cout<<"-->Model: ";cin>>model;this->model=model;
        cout<<"-->year: ";cin>>year;this->year=year;
        cout<<"-->Price: ";cin>>price;this->price=price;
        cout<<"-->ID: ";cin>>id;this->ID=id;

}
 ostream& operator<<(ostream &output, Car& c)
    {

        output
        <<"Make: "<<c.get_make()<<endl
        <<"Model: "<<c.get_model()<<endl
        <<"Year: "<<c.get_year()<<endl
        <<"Price: "<<c.get_price()<<endl
        <<"ID: "<<c.get_id()<<endl;

        return output;

    }

