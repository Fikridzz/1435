//********************************************************************
//Name: Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 13 Problem 1
//Date: 4/16/2012
//Program description: this program takes the names from a .txt file
// and puts them into an array, and then sorts it using the insertion sort
// method and outputs the array. 
//*********************************************************************
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//function name
void insertionator(string data[], int n);


int main()
{
	//defining the array and size
	const int SIZE = 20;
	string array [SIZE]; 


	//opening file name
	ifstream inputFile;
	inputFile.open ("names.txt");


	//outputs the unordered array
	cout<<" "<<endl;
	cout<<"The Names before sorted..."<<endl;
	cout<<" "<<endl;	
	if(inputFile)
		for(int i = 0; i < SIZE; i++)
		{
			getline (inputFile,array[i]);
			cout << array[i] << endl;
		}
	
		
			
	

	//function call for sorting
	insertionator(array, SIZE);
	//as of now the array is sorted

	//outputs the sorted array
	cout<<" "<<endl;
	cout<<"The Names after being sorted..."<<endl;
	cout<<" "<<endl;
	for(int count = 0; count < SIZE; count++)
	cout<< array[count] << endl;

	return 0;

}



//*************************************************
// insertionator function
// This function sorts the names in an array in acsending
// order based on their name.
//
// Return Value
// ------------
// void                
//
// Parameters
// ------------
// string array[]        array of names
// int SIZE  			 SIZE of array
//*************************************************
void insertionator(string array[],int SIZE)
{

   int runs,position;
   string name;

   for (position=1; position<SIZE; position++)
    {
       runs =position - 1;
       name = array[position];
       while ( (runs>=0) && (name < array[runs]) ) 
       {
           array[runs+1] = array[runs];
           runs--;
       }
       array[runs+1] = name;
    }
}	
	
	
