#include<iostream>
using namespace std;

int main()
{
	int num, count = 0;
	const int SIZE = 50;
	int numbers[SIZE];

		
		
	cout << "Enter your values, enter 0 to quit: ";
	cin >> num;
	while(num != 0)
	{
		numbers[count] = num;
		count++;
		cout << "Enter your values, enter 0 to quit: ";
		cin >> num;
	}
	
	count -= 1;

	for(count; count >= 0; count--)
	cout << numbers[count] << " ";

		
	return 0;
		
}
