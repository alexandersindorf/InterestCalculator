#include <iostream>
#include <iomanip>
#include "Interest.h"

using namespace std;


void printMenu() {
	cout << "********************************\n********* Data Input ***********" << endl;
}

double calculateInterest(double initialDeposit, double monthlyDeposit, double interestRate) {
	double interest;
	interest = ((initialDeposit + monthlyDeposit) * ((interestRate / 100) / 12));
	return interest;
}

void printResultsBar() {

	cout << "==================================================================" << endl;
	cout << "  Year          Year End Balance       Year End Earned Interest" << endl;
	cout << "------------------------------------------------------------------" << endl;
}

void printResults(double initialDeposit, double monthlyDeposit, double interestRate, int years) {
	double balance = initialDeposit;
	double interest = 0;
	double cumulativeInterest = 0;
	for (int i = 0; i < years; i++) {
		for (int j = 0; j < 12; j++) {
			interest = calculateInterest(balance, monthlyDeposit, interestRate);
			balance += interest;
			balance += monthlyDeposit;
			cumulativeInterest += interest;
		}
		if (balance < 10)
			cout << fixed << setprecision(2) << "    " << (i + 1) << "             $" << balance << "                   $" << cumulativeInterest << endl;
		else if (balance < 100)
			cout << fixed << setprecision(2) << "    " << (i + 1) << "             $" << balance << "                  $" << cumulativeInterest << endl;
		else if(balance < 1000)
			cout <<fixed << setprecision(2) << "    " << (i + 1) << "             $" << balance << "                 $" << cumulativeInterest << endl;
		else if (balance < 10000)
			cout << fixed << setprecision(2) << "    " << (i + 1) << "             $" << balance << "                $" << cumulativeInterest << endl;
		else if (balance < 100000)
			cout << fixed << setprecision(2) << "    " << (i + 1) << "             $" << balance << "               $" << cumulativeInterest << endl;
		else if (balance < 1000000)
			cout << fixed << setprecision(2) << "    " << (i + 1) << "             $" << balance << "              $" << cumulativeInterest << endl;
		cumulativeInterest = 0;
	}
}

void main() {
	printMenu();
	Interest InterestCalculator;
	cout << "Initial Investment Amount: $";
	double doubleValue;
	int intValue;
	cin >> doubleValue;
	InterestCalculator.SetInitialDeposit(doubleValue);
	cout << "\nMonthly Deposit: $";
	cin >> doubleValue;
	InterestCalculator.SetMonthlyDeposit(doubleValue);
	cout << "\nAnnual Interest: %";
	cin >> doubleValue;
	InterestCalculator.SetInterestRate(doubleValue);
	cout << "\nNumber of years: ";
	cin >> intValue;
	InterestCalculator.SetYears(intValue);
	cout << "\n\n     Balance and Interest Without Additional Monthly Deposits" << endl;
	printResultsBar();
	printResults(InterestCalculator.GetInitialDeposit(), 0, InterestCalculator.GetInterestRate(), InterestCalculator.GetYears());
	cout << "\n\n       Balance and Interest with Additional Monthly Deposits" << endl;
	printResultsBar();
	printResults(InterestCalculator.GetInitialDeposit(), InterestCalculator.GetMonthlyDeposit(), InterestCalculator.GetInterestRate(), InterestCalculator.GetYears());



}