#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int x, y;

	cout<<"Enter two numbers"<<endl;
	cin >> x >> y;
	cout<< x << "*" << y << "=";
	int count = 0;
	while(count < y-1)
	{
		cout<< x << "+";
		count++;
		if(count == 2)
			cout<<x;

	}
 return 0;
}
