#include <iostream>
using namespace std; 

//This program determines the price of a long-distance call based on the user inputs of the day the call was placed, the time it was placed, and the call's length.

int main(){
	
	//declare constants
	const double PEAK_COST(0.4), OFF_COST(0.25), WEEKEND_COST(0.15);
	
	//initialize variables
	double price;
	int startTime, callLength;
	char prompt, day1, day2;
	
	//magic formula
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	//begin program
	cout << "Welcome to Bell Co.'s pricing software! This program will determine the price of your call.\n";
	do {
		price = 0; //ensure price is cleared from last run
		cout << "Please enter the day the call was or will be placed, using the standard two character day codes\nMo, Tu, We, Th, Fr, Sa, Su\n";
		cin >> day1 >> day2;
		cout << "Please enter the time the call was placed, in 24 hour time format with no colon.\n";
		cin >> startTime;
		cout << "Please enter the call's length, in minutes.\n";
		cin >> callLength;
		if (day1 == 'S' || day1 == 's')
			price = callLength * WEEKEND_COST;
		else //if a weekday
		{
			if (startTime > 1800 || startTime < 800)
				price = callLength * OFF_COST;
			else //if peak hours
				price = callLength * PEAK_COST;
		}
		cout << "The call's total price is $" << price << endl
			<< "Would you like to input another call? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y' || prompt == 'y');
	cout << "Goodbye!\n";
	return 0;
}

