//********************************************************************

//Name:Jp Pierce                                                        

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 7 Problem 1

//Date:2/21/2012

//Program description: After prompting the user to input a number, the program creates a Hailstone Sequence

//*********************************************************************
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter a number" << endl;
    cin >> n;
    cout << " " << endl;
    cout << n << " ";
    
    while (n != 1)           //Continues a loop until this is false
    {
          
          if (n % 2 == 0)    // determines if N is even
          {  
             n = n / 2;      // if it is, it preforms this
             cout << n << "  ";
          }
           else              // if not even (odd)
           {
              n = n * 3 + 1; // preforms this
              cout << n << " ";
           }
    } 
    cout << " " << endl;    
    cout << "This is called the Hailstone sequence!" << endl;
    
system ("PAUSE");
return 0;
}
                 
             
