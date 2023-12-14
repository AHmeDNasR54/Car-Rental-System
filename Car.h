#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
    string make,model,color;bool availability;
    int year,ID;
    double price;
    //reservation
    public:
        Car();
        Car(string make,string model,bool availability,int year,int ID,double price);
        void set_availability(bool f);
        void get_details();
        string get_name();
        string get_make();
        string get_model();
        string get_color();
        bool get_availability();
        double get_price();
        int get_year();
        int get_id();
        friend ostream& operator<<(ostream &output, Car &c);
        bool operator ==(Car c)
    {
        return(make==c.get_make()&&model==c.get_model()&&year==c.get_year()&&price==c.get_price()&&ID==c.get_id());
    }
        virtual ~Car();

    protected:

};

#endif // CAR_H
