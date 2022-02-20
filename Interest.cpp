#include "Interest.h"
#pragma once


using namespace std;

Interest::Interest() {
	initialDeposit = -1;
	monthlyDeposit = -1;
	interestRate = -1;
	years = -1;

}
void Interest::SetInitialDeposit(double initialDeposit) {
	this->initialDeposit = initialDeposit;
}

void Interest::SetMonthlyDeposit(double monthlyDeposit) {
	this->monthlyDeposit = monthlyDeposit;
}
void Interest::SetInterestRate(double interestRate) {
	this->interestRate = interestRate;
}

void Interest::SetYears(int years) {
	this->years = years;
}

double Interest::GetInitialDeposit() {
	return initialDeposit;
}

double Interest::GetMonthlyDeposit() {
	return monthlyDeposit;
}

double Interest::GetInterestRate() {
	return interestRate;
}

int Interest::GetYears() {
	return years;
}

