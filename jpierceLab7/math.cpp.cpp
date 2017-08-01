//********************************************************************

//Name: Jp Pierce                                                     

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 7 Problem 3

//Date:2/22/2012

//Program description: Preforms addition, subtraction, and multiplication 
//problems for a student to answer, after the user chooses which opperation.

//*********************************************************************

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    // used so that the random number generator will produce random numbers
    unsigned seed = time(0); 
    srand(seed);
    
    double choice, sum, product, difference, answer, ran1, ran2;
    
    do 
    {
    cout << "        Math Tutor Menu        " << endl;
    cout << "-------------------------------" << endl;
    cout << "1. Addition Problem " << endl;
    cout << "2. Subtraction Problem" << endl;
    cout << "3. Multiplication Problem" << endl;
    cout << "4. Quit this Program" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
        if( choice == 1)
        {
             ran1 = 1+(rand()%500); //produces random number 1
             ran2 = 1+(rand()%500); //produces random number 2
             sum = ran1 + ran2;
             cout << " " << endl;
             cout << "   " << ran1 << endl;
             cout << " + " << ran2 << endl;
             cout << "  ----" << endl;
             cout << "   ";
             cin >> answer;
             if(answer == sum)
             {
               cout << "Correct! That's right.";
               cout << " " << endl;
             }
             else
             {
                 cout << "Sorry, the correct answer is " << sum << endl;;
                 cout << " " << endl;
             }
             
        } 
         
        if( choice == 2)
        {
             ran1 = 1+(rand()%499); //produces random number 1
             ran2 = 1+(rand()%100); //produces random number 2
             difference = ran1 - ran2;
             cout << " " << endl;
             cout << "   " << ran1 << endl;
             cout << "-  " << ran2<< endl;
             cout << "  ----" << endl;
             cout << "   ";
             cin >> answer;
             if( answer == difference)
             {
                 cout << "Correct! That's right";
                 cout << " " << endl;
             }
             else
             {
                 cout << "Sorry, the correct answer is " << difference << endl;
                 cout << " " << endl;
             } 
         }
         
        if( choice == 3)
        {
             ran1 = 1+(rand()%100); //produces random number 1
             ran2 = 1+(rand()%9);   //produces random number 2
             product = ran1 * ran2;
             cout << " " << endl;
             cout << "   " << ran1 << endl;
             cout << " *  " << ran2 << endl;
             cout << " ----" << endl;
             cout << "  ";
             cin >> answer;
             if( answer == product)
             {
                 cout << "Correct! That's right." << endl;
                 cout << " " << endl;  
             }
             else
             {
                 cout << "Sorry, the correct answer is " << product << endl;
                 cout << " " << endl;
             }
        }
        
        if(choice == 4) //Exits the program if 4 is choosen
        cout << "Thank you for using Math Tutor." << endl;
        
        while(choice > 4 || choice < 1) //only allows 1-4 
        {
        cout << "The valid choices are 1, 2, 3, and 4. Please ";
        cout << "choose: ";
             cin >> choice;
        }
        
    }
    while(choice == 1 || choice == 2 || choice == 3); //returns back to menu
    return 0;
}
