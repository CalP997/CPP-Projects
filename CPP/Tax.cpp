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
cout<<"enter number of price £";
cin>>price;
if (price<5000)
{
	cout<<"no tax paid";
}
if (price>5000 and price<=20000){
	cout<<"Total sale price is £"<<price + (price/100)*20;
}
if (price>20000){
	cout<<"Total sale price is £"<<price + (price/100)*90;
}
cin.get();
}
