//Filename: ComputerInvoice.cpp
//Author: Callum Pope
//Date: 11/01/2017 Version 1
//Program to display invoice for computer supplies

#include<iostream>

using namespace std;

//function declarations(prototypes)

//global variables


int main() //or main(void) if no value returned
{
system("color f0");
system("cls");
cout<<"Invoice";
cout<<"\n\tCustomer Details";
cout<<"\n\tName: Callum Pope";
cout<<"\n\tStreet:120 Jeffreys Crescent";
cout<<"\n\tPostcode: L36 4JU";
cout<<"\n\n\t\tOrders";
cout<<"\n\tQuantity";
cout<<"\t\tOrder Number";
cout<<"\t\tItem";
cout<<"\t\tCost(£)";
cout<<"\t\tStatus";
cout<<"\n\t_____________________________________________________________________________________________________________";
cout<<"\n\t\t1";
cout<<"\t\t15001";
cout<<"\t\t15' Monitor";
cout<<"\t\t300";
cout<<"\t\tProcessing";
cin.ignore();
}
