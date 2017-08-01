//********************************************************************

//Name:Jp Pierce

//Class: COSC 1435.001

//Instructor: Marwa Hassan

//Lab 5 Problem 3

//Date:29/2012

//Program description: WRITE what this program actually does

//*********************************************************************

 
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    
    float a, m, f, american, modern, french, totalAmerican, totalModern, totalFrench, total;
    
    
    
    cout << "Please enter the amount of American Colonial chairs sold" << endl;
    cin >> a;
    cout << "Please enter the amount of Modern Chairs sold" << endl;
    cin >> m;
    cout << "Please enter the amount of French Classical chairs sold" << endl;
    cin >> f;
    
    american = 85.00;
    modern = 57.50;
    french = 127.75;
    totalAmerican = a * american;
    totalModern = m * modern;
    totalFrench = f * french;
    total = (totalAmerican + totalModern + totalFrench);
    
    cout << "The total sales of American Colonial chairs is " << setprecision(2) << fixed << totalAmerican << endl;
    cout << "The total sales of Modern chairs is " << setprecision(2) << fixed << totalModern << endl;
    cout << "The total sales of French Classical chairs is " << setprecision(2) << fixed << totalFrench << endl;
    cout << "The total sales of all chairs is " << setprecision(2) << fixed << total << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
    return 0;
}

