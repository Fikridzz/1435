//********************************************************************

//Name: Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 6 Problem 1

//Date:2/14/2012

//Program description: after the user inputs 5 letters, the prgoram calculates if 
// the letters make a palindrome

//*********************************************************************

#include <iostream>
using namespace std;

int main()
{
    char let1, let2, let3, let4, let5; 
    
    cout << "------Palindrome Program------" << endl;
    
    cout << "------Please enter 5 letters with spaces in between each letter " << endl;
    cin >> let1 >> let2 >> let3 >> let4 >> let5;
    
    
    if (let1 == let5 && let2 == let4)
       {
             cout << let1 << endl;
             cout << let2 << endl;
             cout << let3 << endl;
             cout << let4 << endl;
             cout << let5 << endl;
             cout <<let1<<let2<<let3<<let4<<let5<< " is a palindrome word!"<< endl;
        }
             
       else 
       {
            cout << let1 << let2 << let3 << let4 << let5 << endl;
            cout << let1 << let2 << let3 << let4 << let5 
            << " is NOT a palindrome word!" << endl;
        }
            
            system ("PAUSE");
            return 0;
            
}
