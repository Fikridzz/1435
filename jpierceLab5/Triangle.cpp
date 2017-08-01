//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 5 Problem 1

//Date:2/9/2012

//Program description: Finds the Hypotunuse of a tridange, after you enter
//the two sides.

//*********************************************************************

#include <iostream>

#include <cmath>        //needed for math functions like sqrt()

#include <iomanip>     

 

using namespace std;

int main()

{

float side1,side2; // the smaller two sides of the triangle

float hyp; // the hypotenuse calculated by the program

cout << "Please input the values of the two sides" << endl;

cin >> side1 >> side2;

hyp = (side1 * side2) / 2;

cout << "The sides of the right triangle are "<< side1 <<" and "<< side2 << endl;

cout << "The hypotenuse is " << hyp << endl; 
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
    return 0;
}


