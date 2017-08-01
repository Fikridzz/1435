//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 8 Problem 2

//Date:

//Program description: shows the amount of numbers entered, the
// sum of the numbers, the average of the numbers, and the highest
//number entered.

//*********************************************************************
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, avg, sum = 0, count = 0, highest = 0, highest2 = 0;
    
    cout << "Enter a integer (-999 to quit): ";
    cin >> num;
    
    if(num == -999)
    {
    cout <<"You didn't enter any integers" << endl;
    return 0;
    }
    
    
    
    else
    while(num != -999)
    {
      count++;
      if(highest < num)
      {
         highest2 = highest;
         highest = num;
      }
      else if(highest2 < num)
         highest2 = num;
      
      sum += num;
      cout << "Enter another integer (-999 to quit): ";
      cin >> num;
      
      
    }         
    
    avg = sum / count; 
    cout << "*=*=*=*=*=*=*=*=*=*=*" << endl;
    cout << "You entered " << count << " numbers." << endl;
    cout << " " << endl;
    cout << "The sum of the entered numbers is " << sum << endl;
    cout << "The average = " << avg << endl;
    cout << " " << endl;
    cout << "The largest number you entered is " << highest << endl;
    
    system ("pause");
    return 0;
} 
