//********************************************************************
//Name:Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 9 Problem 2
//Date:3/7/2012
//Program description: askes the sale vales of each division, then indentifies the
//division with the most sales for that quarter.
//*********************************************************************
#include<iostream>
#include<string>
using namespace std;

double inputDiv(string location); 
void findHighest(double num1,double num2, double num3, double num4);

int main()
{

 double nE, sE, nW, sW; //variables for each division

 nE = inputDiv("Northeast");
 sE = inputDiv("Southeast");
 nW = inputDiv("Northwest");
 sW = inputDiv("Southwest");
 findHighest(nE, sE, nW, sW);
 return 0;
}

//*************************************************
// inputDiv function
// This function adds two integer values
// asks for 4 numbers
// Return Value
// ------------
// double              returns the sale amount
//
// Parameters
// ------------
// string location     division location
//*************************************************
double inputDiv(string location)
{
  double sales;   
  cout << "Enter quarterly sales figure for the "; 
  cout << location <<" division: ";
  cin >> sales;
  while(sales<0)
  {
   cout<<"The quarterly sales figure must be a positive dollar ammount."<<endl;
   cout<<"Enter quarterly sales figure for the " << location <<  " division: ";
   cin >> sales;
  }
  return sales;
  
} 



//*************************************************
// findHighest function
// This function finds the highest value of 4 digits
//
// Return Value
// ------------
// void                   no values returned
//
// Parameters
// ------------
// double num1                first number
// double num2                second number
// double num3                thrid number
// double num4                fourth number
//*************************************************  
void findHighest(double num1,double num2, double num3, double num4)
{
  double high = -999;
  string winner;
  
  if(num1 > high)
  {
   high = num1;
   winner = ("Northeast");
  }
  if(num2 > high)
  {
   high = num2;
   winner = ("Southeast");
  }
  if(num3 > high)
  {
   high = num3;
   winner = ("Northwest");
  }
  if(num4 > high)
  {
   high = num4;
   winner = ("Southwest");
  }
  
  cout << " " << endl;
  cout << "The " << winner << " division had the highest sales this ";
  cout << "quarter." << endl;
  cout << "That division's sales were $" <<  high << ".00" << endl;
  system("Pause");
  
}



