//********************************************************************
//Name: Jp Pierce
//Class: COSC 1435.001
//Instructor: Marwa Hassan
//Lab 12 Problem 1
//Date: 4/8/2012
//Program description: Writes the values from a user's file to an array
// finds the average, the highest, the lowest, the amount of values, and
// how many values are over 85. Then writes the array to a new file, after
// it converts the values from fahrenheit to celsius
//*********************************************************************
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include <cstdlib>
#include<iomanip>
using namespace std;


//Function prototypes 
double average_temp(const float nums[], int index);
float highest_temp(const float nums[], int index);
float lowest_temp(const float nums[], int index);
float temp_85(const float nums[], int index);
void convert_celsius(const float nums[], int index);


int main()
{
	
    //defining the first array
	const int SIZE = 100;
	float array [SIZE];
	int count = 0; 

	//defining variables
	ifstream inputFile;
	string filename;
	float highest, lowest, greater;
	double average;
	


	cout << "Enter the filename: ";
	cin >> filename;

	//opening the file
	inputFile.open (filename.c_str());


	//if inputFile opens correctly, then it starts 
	// the declaring of the array subscripts 
	if (inputFile)
	{
		while(count < SIZE && inputFile >> array[count])
			count++;
			
		for(int i = 0; i < count; i++)
		cout << array[i] << endl;
	}
	
	//if inputFile doesn't open correctly, starts a loop until the file opens.
	// Then it starts to declare the array subscripts
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
			
		for(int i = 0; i < count; i++)
			cout << array[i] << endl;		
	

	}





	//closing the file 		
	inputFile.close();

	//function returns
	average = average_temp(array, count);
	highest = highest_temp(array, count);
	lowest = lowest_temp(array, count);
	greater = temp_85(array, count);
	lowest = lowest_temp(array, count);
	
	

	cout << "They're are " << count << " values representing temperatures\n";
	cout << "in the file." << endl;
	cout << "The average temperature is: " << setprecision (4)<<average<<endl;
	cout << "The highest temperature is: " << highest << endl;
	cout << "The lowest temperature is: " << lowest << endl;
	cout << "They're " << greater << " temperatures over 85 degrees\n";

	convert_celsius(array, count);



		
	
	
	return 0;
}

	

//*************************************************
// average_temp function
// This function calculates the average number in a 
// array.
//
// Return Value
// ------------
// double                average of values
//
// Parameters
// ------------
// float nums[]          array containing values
// int index             how many values in the array
//*************************************************
double average_temp(const float nums[], int index)
{
	double sum = 0, average;


	for(int a = 0; a < index; a++)
	{
		sum += nums[a];
	}

	average = sum / index;

	return average;
}

//*************************************************
// highest_temp function
// This function finds the highest number in the 
// array.
//
// Return Value
// ------------
// float                highest value
//
// Parameters
// ------------
// float nums[]          array containing values
// int index             how many values in the array
//*************************************************
float highest_temp(const float nums[], int index)
{
	float highest;

	highest = nums[0];
	for(int b = 0; b < index; b++)
	{
		if(nums[b] > highest)
			highest = nums[b];
	}
	return highest;
}

//*************************************************
// lowest_temp function
// This function finds the lowest number in a 
// array.
//
// Return Value
// ------------
// float                lowest value of the array
//
// Parameters
// ------------
// float nums[]          array containing values
// int index             how many values in the array
//*************************************************
float lowest_temp(const float nums[], int index)
{
	float lowest;

	lowest = 999;

	for(int c = 0; c < index; c++)
	{
		if(nums[c] < lowest) 
			lowest = nums[c];
	}
	return lowest;
}

//*************************************************
// temp_85 function
// This function finds how many values in the array
// are over 85.
//
// Return Value
// ------------
// float                number of values over 85.
//
// Parameters
// ------------
// float nums[]          array containing values
// int index             how many values in the array
//*************************************************
float temp_85(const float nums[], int index)
{
	int counter = 0;

	for(int d = 0; d < index; d++)
	{
		if(nums[d] > 85)
			counter++;
	}
	return counter;
}

//*************************************************
// convert_celsius function
// This function creates a new file named "celsius.txt",
// it then converts the array used in previous functions
// (nums[]/array[]) to a new array by performing a 
// fahrenheit to celsius conversion. It then writes the new
// array (new_array) to the file "celsius.txt"
//
// Return Value
// ------------
// void                
//
// Parameters
// ------------
// float nums[]          array containing values
// int index             how many values in the array
//*************************************************
void convert_celsius(const float nums[], int index)
{
	ofstream outputFile;
	outputFile.open ("celsius.txt");
	double new_array [index];

	for(int e = 0; e < index; e++)
	{
		new_array[e] = ((nums[e] - 32) * 5) /9;
		outputFile << setprecision (4)<< new_array[e]<< " ";
	}

	outputFile.close();

	cout<<"You're temperatures have been converted from ";
	cout <<"Fahrenheit to Celsius." << endl;
	cout<<"The new values have been saved to file celsius.txt." << endl;
	
}
