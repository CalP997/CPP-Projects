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
//get number1
cout<<"enter first number: ";
cin>>number1;

//get number2
cout<<"enter second number: ";
cin>>number2;

total = (number1 + number2)/2;

//print total
cout<<"Average is "<<total;

}
