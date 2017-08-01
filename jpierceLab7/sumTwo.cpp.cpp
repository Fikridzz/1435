//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 7 Problem 2

//Date:2/21/2012

//Program description: Compute and print the sum of the integers between the two numbers inclusive

//*********************************************************************
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, sum = 0, y;
    cout << "Input two integers: "; //prompts the user for 2 numbers
    cin >> x >> y;
    cout << " " << endl;
    cout << "Sum of values from " << x;
    cout << " through " << y << " is:" << endl;
    cout << " " << endl;
    if(x < y)                         
    {
         while (x <= y)
         {
          if(x < y)
          {
           sum += x;
           cout << x << " + ";
           ++x;
          }
          else 
          {
            sum += x;
            cout << x;
            ++x;
          }
         }
    }
    
    else 
    {
     while (y <= x)
     {
      if(y < x)
      {     
        sum += y;
        cout << y << " + ";
        y++;
      }
      else
      {
       sum += y;
       cout << y;
       ++y;
      }
    }
        
    
    }    
cout << " = " << sum << endl; 
cout << " " << endl;                 
system ("pause");                    
return 0;
}
