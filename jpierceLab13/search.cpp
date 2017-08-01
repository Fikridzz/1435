//********************************************************************
//Name: Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 13 Problem 2
//Date: 4/16/2012
//Program description: Search takes a list of of numbers from a file and
// makes it into an array. That array is then sorted from acsending order
// using the selection sort method. It then allows the user to request
// the location of a specific number, it then returns which element subscript
// it's at in the array. 
//*********************************************************************
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include <cstdlib>
#include<iomanip>
using namespace std;

void showArray(int[], int);
void selectionSort(int [], int);
int binarySearch(int [], int , int);
void swap(int [], int, int);
int findMin(int [], int, int);
const int SIZE = 40;					//couldn't use any number over 40 or
										//else i got garbage? Couldn't find a 
 										// reasonable reason.


int main()
{
	
	int array [SIZE];					
	int count = 0; 

	
	ifstream inputFile;
	string filename;
	int value, result;
	
	//to find the median VALUE in the array
	// program finds the middle supsrcipt of the 
	//array and outputs the value;
	int median;
	median = SIZE/2;
	

	//opening the file user enters
	cout << "Enter the filename: ";			
	cin >> filename;						

	inputFile.open (filename.c_str());

	cout<<"-----------------------------------------"<<endl;
	 
	if (inputFile)
	{
		
		while(count < SIZE && inputFile >> array[count])
			count++;

		cout << "There are "<< count <<" values in the array: "<<endl;
		cout<<"-----------------------------------------"<<endl;

		

		//outputs the unordered array 
		showArray(array, SIZE);			
										
		
	}
	


	//loop until user opens a correct file
	else 
	{
		while(!(inputFile))
		{
			cout << "Error opening file " <<filename<<endl;	
			cout << "Re-enter the filename: ";
			cin >> filename;
			inputFile.open (filename.c_str());
		}
	
		while(count < SIZE && inputFile >> array[count])
			count++;
			
		showArray(array, SIZE);		
	}


		
	inputFile.close();

	cout<<" "<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Now to sort the array is ascending order: "<<endl;
	cout<<"-----------------------------------------"<<endl;
	


	//Selection Sort function orders the array
	// from least to greatest, using 2 functions
	// in the process.
	selectionSort(array, SIZE);
	
	showArray(array, SIZE);
			
	
	
	cout<<"-----------------------------------------"<<endl;
	cout<<"The Median of the data set is: "<< array[median] << endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Enter the number you're looking for: ";
	cin >> value;
	

	//Binary Search Function
	result = binarySearch(array, SIZE, value);
	

	//loop if user enters a number not in the array
	if(result == -1 )
	{
		while(result == -1)
		{
			cout<<"That number doesn't exist in the array."<<endl;
			cout<<"Enter the number you're looking for: ";
	    	cin >> value;
	    	result = binarySearch(array, SIZE, value);
		}
		
	}
	

	else 
	{
		cout<<"-----------------------------------------"<<endl;
		cout<<"The Number " <<value<<" is found at element " << result;
		cout<< " in the array."<<endl;
		cout<<"-----------------------------------------"<<endl;
	}


	return 0;

}








//*************************************************
// binarySearch function
// This function finds a target value in a ordered
//	array.
//
// Return Value
// ------------
// int                    Subscript number where target
//						value is located at in array.
//
// Parameters
// ------------
// int a[]               array
// int SIZE  			 SIZE of array
// int target			 user target value
//*************************************************
int binarySearch(int a[],int size,int target)
{
	int first =0,
		last = size -1,
		middle,
		position = -1;
	bool found = false;

	while(!found && first<=last)
	{
		middle = (first + last) /2;
		if(a[middle] == target)
		{
			found = true;
			position = middle;
		}
		else if(a[middle] > target)
			last = middle -1;
		else if(a[middle] < target)
			first = middle +1;
	}
	return position;
}



//*************************************************
// showArray function
// This function outputs the array
//
// Return Value
// ------------
// void                    
//	
// Parameters
// ------------
// int a[]               array
// int SIZE  			 SIZE of array
//*************************************************
void showArray(int array[], int size)
{
	for(int count = 0; count < size; count++)
		cout << array[count] << " " << endl;


}


//*************************************************
// swap function
// This function swaps the values of two numbers using
// a temporary number to store in
//
// Return Value
// ------------
// void                   
//
// Parameters
// ------------
// int a[]               array
// int x  			 	represents 1st subscript to be swapped
// int y			    represents 2ns subscript to be swapped
//*************************************************
void swap(int a[], int x, int y)
{
	int temp;

	temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}



//*************************************************
// findMin function
// This function finds the smallest value in a array
//
// Return Value
// ------------
// int  smallest        smallest value in array
//
// Parameters
// ------------
// int a[]               array
// int SIZE  			 SIZE of array
// int i 				 incrementor
//*************************************************
int findMin(int a[], int size, int i)
{
	int smallest, j;

	smallest = i;
	j = i + 1;
	while(j < size)
	{
		if(a[j] < a[smallest])
			smallest = j;
		j = j + 1;
	}
	return smallest;
}


//*************************************************
// selectionSort function
// This function finds the target value entered by the
// user. It uses 2 other function (swap, findMin) to
// do it's dirty work. Then returns the location of the 
// target element subscript.
//
// Return Value
// ------------
// void                    
//
// Parameters
// ------------
// int a[]               array
// int SIZE  			 SIZE of array
//*************************************************	
void selectionSort(int a[], int size)
{
	int i = 0, unsorted;

	while(i<size)
	{
		unsorted = findMin(a, size, i);
		swap(a , i , unsorted);
		i = i +1;
	}
}





