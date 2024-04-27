#ifndef AIRGEAD_BANKING_APP_H_
#define AIRGEAD_BANKING_APP_H_

#include "BalanceAndInterest.h"
#include <vector>

class AirgeadBankingApp {
public:
    AirgeadBankingApp();
    void DisplayInitialDataInputScreen();
    void GetUserInput();
    void CalculateBalanceAndInterest(bool withMonthlyDeposit);
    void DisplayReport(bool withMonthlyDeposit);

private:
    double initialInvestmentAmount;
    double monthlyDeposit;
    double annualInterestRate;
    int numberOfYears; // Make sure this is correctly declared
    std::vector<BalanceAndInterest> balanceAndInterestReport;
};

#endif // AIRGEAD_BANKING_APP_H_
