//********************************************************************
//Name: Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 14 problem 1
//Date: 4/20
//Program description: This program takes 
//*********************************************************************
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include <cstdlib>
#include<iomanip>
using namespace std;

void showArray(int [], string [], int [], int);
int findMax(int [], int, int);
void sortSelection3(int [], string [], int [], int);
void swap(int [], int, int);
void nameSwap(string [], int, int);




int main()
{

	//declaring parallel arrays
	const int SIZE = 20;
	int id[SIZE], grade[SIZE];
	string name[SIZE];

	//opening textfile grade.dat
	ifstream inputFile;
	inputFile.open("grade.dat");

	if(!inputFile)
	{
		cout<<"Error File Corrupt";
		return 0;
	}
	
	//writing elements to array from textfile
	for( int i = 0; i < SIZE; i++)
	{
		inputFile >> id[i];
		inputFile >> name[i];
		inputFile >> grade[i];
	}

	cout<<"Here are the Identification numbers, student names, ";
	cout<<"and their exam scores."<<endl;	

	//outputing array contents
	showArray(id, name, grade, SIZE);

	cout<<"Oops, my bad, let me orginze that in order of exam scores!"<<endl;

	//sorts arrays using selection sort method
	sortSelection3(id, name, grade, SIZE);

	
	//outputing sorted array contents
	showArray(id, name, grade, SIZE);

 	return 0;

	
}



//*************************************************
// showArray function
// This function outputs the contents of the arrrays
//
// Return Value
// ------------
// void                    
//
// Parameters
// ------------
// int id[]			id array
// int grade[]		grade array
// string name[]	name array
// int size 		size of the arrays
//************************************************
void showArray(int id[], string name[], int grade[], int size)
{
	cout<<" "<<endl;
	cout<<"ID #	     "<<"Student    "<<"Exam Score"<<endl;
	cout<<"-----------------------------------------"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<id[i]<<
			  setw(15)<<name[i]<<
			  setw(10)<<grade[i]<<endl;
	}


	cout<<"------------------------------------------"<<endl;
	cout<<" "<<endl;


}


//*************************************************
// sortSelection function
// This function uses sub-functions to sort the contents of
// the arrays in the selection sort method
//
// Return Value
// ------------
// void                    
//
// Parameters
// ------------
// int id[]			id array
// int grade[]		grade array
// string name[]	name array
// int size 		size of the arrays
//************************************************
void sortSelection3(int id[], string name[], int grade[], int size)
{
	int start = 0, largest;

	while(start < size)
	{
		largest = findMax(grade, start, size);
		swap(grade, start, largest);
	    swap(id, start, largest);
	    nameSwap(name, start, largest);
		
		
		start++;
	}

}


//*************************************************
// swap function
// This function swaps the values of two elements 
// index of an array
//
// Return Value
// ------------
// void                    
//
// Parameters
// ------------
// int a[]			array holding two elements to be 
//					swapped
// 
// int x			variable holding one value
// int y			variable holding the other value
//					too be swapped.
//************************************************
void swap(int a[], int x, int y)
{
	int temp;

	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}

//*************************************************
// nameSwap function
// This function swaps the values of two elements 
// index of an array
//
// Return Value
// ------------
// void                    
//
// Parameters
// ------------
// string a[]		array holding two elements to be 
//					swapped
// 
// int x			variable holding one value
// int y			variable holding the other value
//					too be swapped.
//************************************************
void nameSwap(string a[], int x, int y)
{
	string temp;

	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}


//*************************************************
// findMax function
// This function finds the largest element of an
// array, then returns it.
//
// Return Value
// ------------
// int findMax      biggest value in array           
//
// Parameters
// ------------
// int a[]			array holding two elements to be 
//					swapped
// 
// int start		starting variable 
// int size			size of array
//************************************************
int findMax(int a[], int start, int size)
{
	int largest = start;
	int temp = start +1;

	while(temp < size)
	{
		if(a[temp] > a[largest])
			largest = temp;
		temp++;
	}

	return largest;
	
}

