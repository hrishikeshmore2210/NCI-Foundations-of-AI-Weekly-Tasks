#include <stdio.h>

// Function to convert currency
double convert_currency(double amount, double from_rate, double to_rate) {
    double converted_amount = (amount / from_rate) * to_rate;
    return (converted_amount * 100.0) / 100.0; // Round to 2 decimal places
}

// Main function for testing the conversion
int main() {
    double amount = 100;  // Example amount in EUR
    double from_rate = 1.0;  // EUR to EUR rate
    double to_rate = 90.0;  // Conversion rate to INR

    double converted = convert_currency(amount, from_rate, to_rate);
    printf("Converted Amount: %.2f INR\n", converted);

    return 0;
}


