#include <stdio.h>

float remainingBalance(float amount) {
    float fed = amount * 0.195;  
    float serviceCharges = amount * 0.10;  
    float afterTaxBalance = amount - (fed + serviceCharges);
    return afterTaxBalance;
}

int main() {
    float amount;
    
    printf("Enter the recharge amount (PKR): ");
    scanf("%f", &amount);
    
    if (amount <= 0) {
        printf("Invalid input! Amount must be greater than zero.\n");
        return 1;
    }
    
    float balance = remainingBalance(amount);
    printf("Remaining balance after tax deductions: PKR %.2f\n", balance);
    
    return 0;
}
