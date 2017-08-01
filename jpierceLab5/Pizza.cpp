//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 5 Problem 2

//Date:2/9/2012

//Program description:finds how many slices of pizza are on a pizza, if each slices
// has an area of 14.125

//*********************************************************************




#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
     double slices, area, diameter, r, pi;
    
    cout << "What is the Diameter of the pizza?" << endl;
    cin >> diameter;
    
    pi = 3.12159;
    r = diameter / 2;
    area = pi * (pow(r, 2.0));
    slices = area / 14.125;
    
    cout << "This pizza has " << setprecision(1) << fixed 
    << slices << " slices." << endl;
    cout << "Each slice has an area of 14.125." << endl;
     
    system ("Pause");
    return 0;
    }
