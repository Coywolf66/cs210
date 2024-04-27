#include "AirgeadBankingApp.h"
#include <iostream>

int main() {
    AirgeadBankingApp app;

    app.DisplayInitialDataInputScreen();
    std::cin.get(); std::cin.get(); // Handle the "Press any key to continue . . ." prompt

    app.GetUserInput();
    std::cout << "\nCalculating...\n";

    app.CalculateBalanceAndInterest(false); // Calculate without additional monthly deposits
    app.DisplayReport(false); // Display results without additional monthly deposits

    app.CalculateBalanceAndInterest(true); // Calculate with additional monthly deposits
    app.DisplayReport(true); // Display results with additional monthly deposits

    return 0;
}
