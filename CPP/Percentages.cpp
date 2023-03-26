//Filename: AssignmentStatements.cpp
//Author: Callum Pope
//Date: 11/01/2017 Version 1
//Program to input, calculate and output data

#include<iostream>

using namespace std;

//function declarations(prototypes)

//global variables
int number1;
int number2;
int total;

int main() //or main(void) if no value returned
{
system("color f0");
//get number
cout<<"enter number: \n";
cin>>number1;

cout<<"enter percentage: \n";
cin>>number2;

//display message
cout<<"\nThank you\n";

total = (number1/100) * number2;

//print total
cout<<"Your total is "<<total;

}
