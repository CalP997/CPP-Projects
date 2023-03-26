//Filename: .cpp
//Author: Callum Pope
//Date: 11/01/2017 Version 1
//Program comments

#include<iostream>

using namespace std;

//function declarations(prototypes)

//global variables
int days;

int main() //or main(void) if no value returned
{
system("color f0");
cout<<"enter number of days";
cin>>days;
if (days<7)
{
	cout<<"number of days "<<days;
}
if (days>7 and days<365){
	cout<<"number of weeks "<<days/7;
}
if (days>365){
	cout<<"number of years "<<days/365;
}

}
