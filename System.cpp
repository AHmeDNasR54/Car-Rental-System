#include "System.h"
System::System()
{
    cars = new Car[10];
    cus = new Customer[10];
    r = new Reservation[10];
    rental = new RentalAgreement[10];
    in = new Invoice[10];
}

System::~System()
{
    delete[]cars;
    delete[]cus;
    delete[]r;
    delete[]rental;
    delete[]in;
}
void System::AddCar()
{
    cars[countCAR++].get_details();


}
void System::AddCustomer()
{
    cus[countCUS++].get_details();

}
void System::RentCar()
{
    //AddCustomer();
    int id,id2;
    cout << "Enter the id for the car you want to reserve : ";
    int test = 0,test2=0;
    cin >> id;
    for (int i = 0; i < countCAR; i++)
        if (cars[i].get_id() == id)
        {
            test++;

            cout<<"Enter id for the customer who wants to reserve this car\n";
            cin>>id2;
            for(int x=0; x<countCUS; x++)
                if(cus[x].get_ID()==id2)
                {
                    test2++;
                    r[countRESERV].c = &cars[i];
                    r[countRESERV].cus = &cus[x];
                    r[countRESERV].get_details();
                    rental[countRENT].r = &r[countRESERV++];
                    rental[countRENT].get_details();//*
                    in[countINVOICE].r = &rental[countRENT++];
                    double taxees;
                    cout << "Enter taxes : \n";
                    cin >> taxees;
                    in[countINVOICE].set_taxes(taxees);
                    countINVOICE++;
                    cars[i].set_availability(false);
                    break;
                }
            if (test2 == 0)
                cout << "There is no Customer has this ID\n";
        }
    if (test == 0)
        cout << "There is no Car has this ID\n";

    if (test != 0&&test2!=0)

        cout << "The car is rented successfully\n";


}
void System::show_available()
{
    int counter = 1;
    for (int i = 0; i < countCAR; i++)
        if (cars[i].get_availability() != false)
        {
            cout << "the car number " << counter << " : \n";
            cout << cars[i];
            if(i!=countCAR-1)
                cout<<"*************\n";
        }

}
void System::ReturnCar()
{
    int id;
    cout << "Enter the id for the car you want to return : ";
    int test = 0;
    cin >> id;
    for (int i = 0; i < countCAR; i++)
        if (cars[i].get_id() == id)
        {
            test++;
            for (int x = 0; x < countINVOICE; x++)
                if (cars[i].get_id() == in[x].r->r->c->get_id())     //rental[x].r->c->get_id()) count rent
                {
                    /*in[countINVOICE].r = &rental[x];
                    double taxees;
                    cout << "Enter taxes : \n";
                    cin >> taxees;
                    in[countINVOICE].set_taxes(taxees);*/
            cars[i].set_availability(true);
          cout<<"Please, wait for invoice ... \n";
        cout << "----------------------------\n";
        cout << "|         #Invoice#         |\n";
        cout << "| -->Rental charges : " << in[x].get_charge() << "   |\n";
        cout << "| -->Taxes: " << in[x].get_taxes() << "              |\n";
        cout << "| -->Total amount due: " << in[x].get_total() << "  |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "----------------------------\n";
          break;
                }
            //cars[i].set_availability(true);
            break;
        }
    if (test == 0)
        cout << "There is no Car has this ID\n";
  /*  else
    {
        cout << "----------------------------\n";
        cout << "|         #Invoice#         |\n";
        cout << "| -->Rental charges : " << in[countINVOICE].get_charge() << "   |\n";
        cout << "| -->Taxes: " << in[countINVOICE].get_taxes() << "              |\n";
        cout << "| -->Total amount due: " << in[countINVOICE].get_total() << "  |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "|                           |\n";
        cout << "----------------------------\n";*/
        countINVOICE++;

    }

void System::RentalHistory()
{
    for (int i = 0; i < countRENT; i++)
    {
        cout << "Car number " << i + 1 << " : \n";
        cout << "--->Make: " << rental[i].r->c->get_make() << "     -->ID: " << rental[i].r->c->get_id() << endl;
        cout << "-->Customer's name : " << rental[i].r->cus->get_name() << endl;
        cout << rental[i];
        if(i!=countRENT-1)
            cout<<"*************\n";

    }
}
void System::GenaraiteReport ()
{
    int choice;
    cout<<"$)1 Show customers history\n";
    cout<<"$)2 Show cars history\n";
    cout<<"$)3 Show total profit for the system\n";
    cout << "Please enter your choice (1-3): ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {

        int test=0;
        for(int i=0; i<countCUS; i++)
        {
            cout<<cus[i];
            for(int x=0; x<countRENT; x++)
                if(rental[x].r->cus->get_ID()==cus[i].get_ID())
                {
                    test++;
                    cout<<"The details for the car number "<<x+1<<" which this customer rented :\n";
                    cout<<*(rental[x].r->c);
                    cout<<*(rental[x].r);
                    cout<<rental[x];
                }
            if(test==0)
                cout<<"This customer hasn't rented any car yet\n";

        }
        }
        break;

    case 2:
        {

        int test=0;
        for(int i=0; i<countCAR; i++)
        {
            cout<<"Car number "<<i+1<<" : "<<endl;
            cout<<cars[i];
            for(int x=0; x<countRENT; x++)
                if(rental[x].r->c->get_id()==cars[i].get_id())
                {
                    test++;
                    cout<<"This car was rented by customer whose name : "<<rental[i].r->cus->get_name()<<endl
                        <<*(rental[x].r)<<endl;
                    cout<<rental[x];
                    if(x!=countRENT-1)
                        cout<<"**********\n";

                }
            if(test==0)
                cout<<"This car hasn't been rented any more yet\n";
            if(i!=countCAR-1)
                cout<<"**********\n";
         }
        }

        break;
    case 3:
        double sum=0;
        for(int i=0;i<countINVOICE;i++)
            sum+=in[i].get_total();
        cout<<"The total profit for system from renting cars is : "<<sum<<endl;
        break;



    }
}



