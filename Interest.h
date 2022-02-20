#ifndef INTEREST_H
#define INTEREST_H

class Interest {
	private:
		double initialDeposit;
		double monthlyDeposit;
		double interestRate;
		int years;
	public:
		Interest();
	
		void SetInitialDeposit(double iintialDeposit);

		void SetMonthlyDeposit(double monthlyDeposit);

		void SetInterestRate(double interestRate);

		void SetYears(int years);
		double GetInitialDeposit();
		double GetMonthlyDeposit();
		double GetInterestRate();
		int GetYears();





};

#endif