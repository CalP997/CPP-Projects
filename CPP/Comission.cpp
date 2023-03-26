//Filename: .cpp
//Author: Callum Pope
//Date: 11/01/2017 Version 1
//Program comments

#include<iostream>

using namespace std;

//function declarations(prototypes)

//global variables
int price;

int main() //or main(void) if no value returned
{
system("color f0");
cout<<"enter number of price GBP ";
cin>>price;
if (price<=10000)
{
	cout<<"Total sale price is GBP "<<price + (price/100)*5;
}
if (price>10000 and price<=25000){
	cout<<"Total sale price is GBP "<<price + (price/100)*10;
}
if (price>25000){
	cout<<"Total sale price is GBP "<<price + (price/100)*20;
}
cin.get();
}
