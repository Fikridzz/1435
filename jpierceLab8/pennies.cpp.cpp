#include<iostream>
#include<cmath>
using namespace std;

int main()
{

 int days, count;
 double  amountEarned = .01, total;
    
 cout << "Please enter the number of days worked: ";
 cin >> days;
 cout << "  " << endl;
    
 while(days < 1)
 {
      if(days == 0 || days < 0)
      {
       cout << "The number of days must be atleast one" << endl;
       cout << "Enter the number of days: ";
       cin >> days;
      }
 }
    
    cout << "Day             Amount Earned" << endl;
    cout << "---------------------------------" << endl;
    
    for(count = 1; count <= days; count++)
    {
       cout << count <<"               $  " << amountEarned << endl;
       total += amountEarned;
       amountEarned *= 2;
       
       
    }
       cout << "---------------------------------" << endl;
       cout << "Total           $  " << total << endl;
     
    system ("pause");
    return 0;
}     
       
