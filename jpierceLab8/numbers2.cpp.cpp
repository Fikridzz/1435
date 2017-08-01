//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 8 Problem 2

//Date:

//Program description: shows the amount of numbers from a file, the
// sum of the numbers, the average of the numbers, and the highest
//number in file.

//*********************************************************************
#include <iostream>
#include <cmath>
#include <fstream>


using namespace std;

int main()
{   
    string fileName;
    ifstream infile;
    
    cout << "Please enter the filename\n";
    cin >> fileName;
    
    infile.open(fileName.c_str());
    if(!infile)
    {
       cout << "ERROR file did not open\n";

    }
    
    
    int num, sum = 0, count = 0, high = -1000;
    float avg;

    cout << "Obtaining number from file: ";
    
    
    
    while(infile >> num)
    {  
     if(num > high)
     {
        high = num;  
     }
       
       sum += num;
       count++;
    }         
    infile.close();
    
   
  
    
    avg = sum / count;
    
    cout << " " << endl;
    cout << "*=*=*=*=*=*=*=*=*=*=*" << endl;
    cout << "You entered " << count << " numbers." << endl;
    cout << " " << endl;
    cout << "The sum of the entered numbers is " << sum << endl;
    cout << "The average = " << avg << endl;
    cout << " " << endl;
    cout << "The largest number you entered is " << high << endl;
    
    
    system ("pause");
    return 0;
} 
