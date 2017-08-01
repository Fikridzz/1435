//********************************************************************

//Name:

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 6 Problem x

//Date:

//Program description: WRITE what this program actually does

//*********************************************************************


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    
    float choice, distance, soundwave;
    
    cout << "***Welcome to Speed of Sound Calculator***" << endl;
    cout << "___________Please select a medium:________" << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    
      if (choice >= 4 || choice <= 0)
    {
       cout << "The valid  choices are 1 through 3." <<endl;
       cout << "Run the program again and select a vaild choice." << endl;
               }
    
    else if (choice == 1)
    {
         cout << "Enter the distance" << endl;
         cin >> distance;
         if (distance <= 0)
         {   cout << "Distance must be greater than zero." << endl; }
         else    
         { soundwave = distance / 1100;
         cout << "A sound wave takes " << setprecision(4) << soundwave << " seconds to travel " 
         << distance << " feet through air." << endl; }
         }
    
    else if (choice == 2)
    {
         cout << "Enter the distance" << endl;
         cin >> distance;
         if (distance <= 0)
          {  cout << "Distance must be greater than zero." << endl; }
         else   
         { soundwave = distance / 4900;
         cout << "A sound wave takes " << setprecision(4) << soundwave << " seconds to travel " 
         << distance << " feet through water." << endl; }
         }
    
    else if (choice == 3)
    {
         cout << "Enter the distance" << endl;
         cin >> distance;
         if (distance <= 0)
         {   cout << "Distance must be greater than zero." << endl; }
         else   
         { soundwave = distance / 16400;
         cout << "A sound wave takes " << setprecision(4) << soundwave << " seconds to travel " 
         << distance << " feet through steel." << endl; }
         }
    
         system ("pause");
         return 0;
}               
    
    
