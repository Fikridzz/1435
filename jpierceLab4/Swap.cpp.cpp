    //*********************************************
    //Jp Pierce
    //COSC 1435.001
    //Marwa Hassam
    //Lab 4 Part 2
    //2/2/2012
    //This program takes two values from the user and then swaps them
    //before printing the values. The user will be prompted to enter both numbers.
    //*********************************************
    
    #include <iostream>
    using namespace std;
    
    int main()
    {
       int firstNumber;
       int secondNumber;
       
       
       cout << "Enter the first number" << endl;
       cin >> firstNumber;
       
       cout << "Enter the second number" << endl;
       cin >> secondNumber;
       
       cout << "You input the values as " << firstNumber <<
       " and " << secondNumber << endl;
       
       firstNumber = firstNumber + secondNumber;
       secondNumber = firstNumber - secondNumber;
       firstNumber = firstNumber - secondNumber;
       
       cout << "After swapping, the values of the two numbers are now "
       << firstNumber << " and " << secondNumber << endl;
       
       
        
        system ("PAUSE");
        return 0;
        
        }
        
         
    
    

    
    
    
    
    
    
    
    
  
