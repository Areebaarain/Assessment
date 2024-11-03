#include <stdio.h>

int main() {
    float income, tax = 0.0;

    // Input: Total income
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate tax based on income brackets
    if (income <= 250000) {
        // No tax for income up to 250,000
        tax = 0;
    } else if (income <= 500000) {
        // 5% tax for income between 250,001 and 500,000
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        // 5% tax for 250,001 to 500,000 and 10% tax for 500,001 to 1,000,000
        tax = (250000 * 0.05) + ((income - 500000) * 0.10);
    } else {
        // 5% tax for 250,001 to 500,000, 10% for 500,001 to 1,000,000, and 15% above 1,000,000
        tax = (250000 * 0.05) + (500000 * 0.10) + ((income - 1000000) * 0.15);
    }

    // Display the calculated tax
    printf("Your income tax is: %.2f rupees\n", tax);

    return 0;
}
