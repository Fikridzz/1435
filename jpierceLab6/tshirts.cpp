//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 6 Problem 2

//Date:2/14/2012

//Program description: WRITE what this program actually does

//*********************************************************************

#include <iostream>
using namespace std;

int main()
{
    float shirt, total1, total2, total3, total4, total5;
    
    cout << "Hello, how many shirts would you like?" << endl;
    cin >> shirt;
    
    if  (shirt <= 0)
       {
               cout << "Error, invalid input" << endl;
               }
       
    else if (shirt < 5)
    {
              total1 =  shirt * 12;
              cout << "The cost per shirt is $12.00" << endl;
              cout << "Your total is $ " << total1 << endl;
              }
    else if (shirt >= 5)
    {
              total2 = shirt * (12 * .9);
              cout << "The cost per shirt is $10.80" << endl;
              cout << "Your total is $ " << total2 << endl;
              }
    else if (shirt >= 11)
    {
               total3 = shirt * (12 * .85);
               cout << "The cost per shirt is $10.20" << endl;
               cout << "Your total is $ " << total3 << endl;   
               }
     else if (shirt >= 21)
     {
               total4 = shirt * (12 * .8);
               cout << "The cost per shirt is $9.60" << endl;
               cout << "Your total is $ " << total4 << endl;
               }
      else if (shirt >= 31)
      {
               total5 = shirt * (12 * .75);
               cout << "The cost per shirt is $9.00" << endl;
               cout << "Your total is $ " << total5 << endl;
               }
      
       
       system ("Pause");
       return 0;
       }
               
        
    
