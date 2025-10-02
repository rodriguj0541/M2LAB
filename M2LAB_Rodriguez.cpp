/* 
// CSC 134
// M2LAB1 - General Crates, Inc. case study
// Calculates volume, cost, customer charge, and profit for a crate.
// Josue Rodriguez
// 10/02/2025
// */


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Named constants (per cubic foot), from the slides
    const double COST_PER_CUBIC_FOOT   = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;

    // Inputs
    double length, width, height;

    // Derived values
    double volume, cost, charge, profit;

    // Nicely formatted money output
    cout << fixed << setprecision(2) << showpoint;

    // ---- Step 1: Get dimensions from the user ----
    cout << "Enter the crate dimensions in feet.\n";
    cout << "Length: ";
    cin  >> length;
    cout << "Width : ";
    cin  >> width;
    cout << "Height: ";
    cin  >> height;

    // ---- Step 2: Calculate volume, cost, charge, profit ----
    volume = length * width * height;                 // cubic feet
    cost   = volume * COST_PER_CUBIC_FOOT;            // $ to build
    charge = volume * CHARGE_PER_CUBIC_FOOT;          // $ charged to customer
    profit = charge - cost;                           // $ profit

    // ---- Step 3: Display results ----
    cout << "\n----- Crate Report -----\n";
    cout << "Volume (cu ft): " << setprecision(2) << volume << '\n';
    cout << "Cost to build : $" << cost   << '\n';
    cout << "Charge to cust: $" << charge << '\n';
    cout << "Profit        : $" << profit << '\n';

    return 0;
}
