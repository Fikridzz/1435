//********************************************************************
//Name:Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 9 Problem 1
//Date:3/5/2012
//Program description: finds the average of three numbers entered by the user
// and then finds the standard deviation of the numbers.
//*********************************************************************
#include<iostream>
#include<cmath>
using namespace std;

double average(double, double, double);
double stdev(double,double,double,double);

int main()
{
    double d1, d2, d3;
    double avg, dev;
    char again;
    
    do
    {
         cout << "Enter 3 numbers: ";
         cin >> d1 >>d2 >>d3;
         avg = average(d1,d2,d3);
         cout << "The average is " << avg << endl;
         dev = stdev(d1,d2,d3,avg);
         cout << "The standard deviation is " << dev << endl;
         cout << "  " << endl;
         cout << "Would you like to go again?";
         cout << " (y/n):";
         cin >> again;
    
    }    while(again == 'Y' || again == 'y');
         
         cout << "Goodbye" << endl;
         return 0;
}



//*************************************************
// average function
// Purpose:  Compute the average of three doubles
//
// Return Value
// ------------
// double            average of the three numbers
//
// Parameters
// ------------
// double num1             first number
// double num2             second number
// double num2             second number
//*************************************************
double average(double num1, double num2, double num3)
{
     double avg;
     avg = (num1 + num2 + num3) / 3;
     return avg;  //or just return (num1 + num2 + num3) / 3;
}

 



//*************************************************
// Standard Deviation
// Purpose:  Compute the standard deviation of three doubles, and avgerage
//
// Return Value
// ------------
// double            standard deviation of the 3 numbers and average
//
// Parameters
// ------------
// double num1             first number
// double num2             second number
// double num3             third number
// double avg              average of the three numbers
//*************************************************
double stdev(double num1, double num2, double num3, double avg)
{
       double deviation;
       deviation = sqrt( (pow((num1-avg),2) + pow((num2-avg),2) + pow((num3-avg),2)/2));
       return deviation;
}       
       
