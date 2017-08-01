#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num, count = 0;
    ofstream ofile;
    ofile.open ("report.txt");
    
    
        cout << "Enter a number: ";
        cin >> num;
        if(num == -1)
        return 0;
        
        else
        while(num != -1)
        {
          if(num == 0)
          count ++;
        cout << "Enter another number: ";
        cin >> num;
        }
        ofile << count;
        
        return 0;          
    
    
 
   
}    
               
