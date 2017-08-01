   //*********************************************************
   //Jp Pierce
   //COSC 1435.001
   //Marwa Hassan
   //Lab 4 Part 1
   //2/2/2012
   //Program Description: Displays "Age Calculator Program"
   //*********************************************************
   #include <iostream>
   using namespace std;
   
   int main()
   {
       const int currentYear = 2012;
       int yearBorn;
       int age;
       
       //----------- Program Code ------------
       cout << "***Age Calculator Program***"; 
       cout << endl << endl; 
       
       cout << "Please enter the year your were born: " << endl;
       cin >> yearBorn;
       age = currentYear - yearBorn;
       
       cout << "You are currently " << age << " years old." << endl;
       cout << endl;
       
       system ("PAUSE");
       return 0;
       }
       
       
       
   
   
   
   
   
   
   
   
   

