#include <stdio.h>

float remainingBalance(float amount) {
    float fed = amount * 0.195;  // 19.5% Federal Excise Duty
    float service_charges = amount * 0.10;  // 10% Service Charges
    return amount - (fed + service_charges);
}

int main() {
    float amount;
    
    printf("Enter recharge amount (PKR): ");
    scanf("%f", &amount);
    
    float balance = remainingBalance(amount);
    
    printf("Available Balance: %.2f PKR\n", balance);
    
    return 0;
}
