#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

char in_out();
void in_function();
void out_function();


int main()
{
	char patient;
	
	patient = in_out();
	if(patient == 'i' || patient == 'I')
		in_function();
	else
		out_function();

}


char in_out()
{
	char answer;

	cout << "Was the patient type?"<<endl;
	cout << "In-patient or Out-patient? (I or O) ";
	cin >> answer;
	return answer;
}

void in_function()
{
	int days;
	float rate, meds, services, room_price, total;

	cout << " " << endl;
	cout << "Number of days in the hospital: ";
	cin >> days;
	while(days <= 0)
	{
		cout << "Days in hospital must be one or more. Please re-enter: ";
		cin >> days;
	}
	cout << "Daily room rate: $";
	cin >> rate;
	while(rate <= 0)
	{
		cout << "Daily room rate must be one or more. Please re-enter: $";
		cin >> rate;
	}
	cout << "Medication charges: $";
	cin >> meds;
	while(meds <= 0)
	{
		cout << "Medication charges must be zero or more. Please re-enter: $";
		cin >> meds;
	}
	cout << "Lab fees and other service charges: $";
	cin >> services;
	while(services <= 0)
	{
		cout << "Service charges must be one or more. Please re-enter: $";
		cin >> services;
	}

	cout << " " << endl;
	cout << "___________________________________________" << endl;
	
	cout << "Charges were printed to HospitalReport.txt." << endl;


	room_price = days * rate;
	total = room_price + meds + services;
	ofstream outputFile;
	outputFile.open("HospitalReport.txt");
	outputFile << "The total charges are $" << fixed << setprecision (2) << total; 
	outputFile.close();
	
}

void out_function()
{
	float total, meds, services;

	cout << " " << endl;
	cout << "Medication charges: $";
	cin >> meds;
	while(meds <= 0)
	{
		cout << "Medication charges must be zero or more. Please re-enter: $";
		cin >> meds;
	}
	cout << "Lab fees and other service charges: $";
	cin >> services;
	while(services <= 0)
	{
		cout << "Service charges must be one or more. Please re-enter: $";
		cin >> services;
	}
	cout << " " << endl;
	cout << "___________________________________________" << endl;
	
	cout << "Charges were printed to HospitalReport.txt." << endl;

	total = meds + services;
	ofstream outputFile;
	outputFile.open("HospitalReport.txt");
	outputFile << "The total charges are $" << fixed << setprecision (2) << total;
	outputFile.close();
	
}
