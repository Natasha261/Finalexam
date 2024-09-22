#include <iostream>
using namespace std;

// Function to calculate the total cost based on water units consumed
double calculateTotalCost(int units) {
    double cost = 0;

    //For the first 10 units
    if (units >= 0 || units <= 10) {
        int tier1_units = min(units, 10);
        cost += tier1_units * 150;
        units -= tier1_units;
    }

    //For the next 10 units (from 11 to 20)
    if (units >= 11 || units <= 20) {
        int tier2_units = min(units, 10);
        cost += tier2_units * 175;
        units -= tier2_units;
    }

    // For units beyond 20
    if (units > 20) {
        cost += units * 200;
    }

    return cost;
}

int main() {
    double balance, totalCost, surcharge, VAT, finalCost;
    int waterUnits;

    // Input user balance and water units consumed
    cout << " Enter the amount of money loaded onto the account (UGX): ";
    cin >> balance;
    cout << " Enter the number of water units consumed: ";
    cin >> waterUnits;

    // Calculate total cost based on units consumed
    totalCost = calculateTotalCost(waterUnits);

    // Apply 15% surcharge
    surcharge = totalCost * 0.15;
    totalCost += surcharge;

    // Apply 18% VAT
    VAT = totalCost * 0.18;
    finalCost = totalCost + VAT;

    // Check if balance is sufficient
    if (balance >= finalCost) {
        balance -= finalCost;
        cout << " Transaction successful. Have a nice day " << endl;
        cout << " Your total cost:  " << finalCost << " UGX" << endl;
        cout << " Your remaining balance on the account is  " << balance << " UGX" << endl;
    } else {
        cout << " Insufficient balance. Please deposit more money and try again " << endl;
        cout << " Your current balance: " << balance << " UGX" << endl;
    }

    return 0;
}