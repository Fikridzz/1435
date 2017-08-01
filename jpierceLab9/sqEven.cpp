//********************************************************************
//Name:Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 9 Problem 1
//Date:3/19/2012
//Program description: after getting two numbers, the program finds if 
// both numbers are even, if they are it then finds the sum of all the 
// squared even inclusive numbers in between them.
//*********************************************************************
#include <iostream>
using namespace std;


int evenSquares(int, int);
bool checkPositive(int,int);

int main()
{
    int int1, int2, sum, result;
    
    
        
    cout <<"Please enter two integers"<< endl;
    cin >> int1 >> int2;
    do
    {
      result = checkPositive(int1, int2);
      cout << result << endl;
      if(result == 0)
        {
         cout<<"One or more of the integers you entered are invaild.\n"<<endl;
         cout <<"Please enter two integers"<< endl;
         cin >> int1 >> int2;
        }
    }while(result == 0); 
    sum = evenSquares(int1, int2);
    cout << sum << endl;
    //system("Pause");
    return 0;
}



//*************************************************
// evenSquares function
// Purpose:  adds the sum of the squared even numbers between the parameters
//
// Return Value
// ------------
// int           sum of the squared even numbers
//
// Parameters
// ------------
// int x        =        int1
// int y        =        int2
// 
//*************************************************
int evenSquares(int x, int y)
{
 int num = 0;
 
 if( x >= y)
 {
     while(y <= x)
     {
       if(y % 2 == 0)
       {
            num += y * y;
            y++;
       }       
       else if(y % 1 == 0)
            y++;  
     } 
 }   
 else
 {
     while(x <= y)
      {
        if(x % 2 == 0)
        {
         num += x * x;
         x++;
        }
        else if(x % 1 == 0)
        x++;
      }
 } 
 return num;
}
  

//*************************************************
// checkPostive function
// Purpose: returns true for the values are even if not they're not
// it prompts the user for another set of numbers      
//
// Return Value
// ------------
// bool status 
//
// Parameters
// ------------
// int a        =        int1
// int b        =        int2
// 
//*************************************************     
bool checkPositive(int a, int b)
{
     bool status;
     if(a > 0 && b > 0)
      {
          status = 1;
          return status;
      }
     
     else
      {
          status = 0;
          return status;
      }
}

