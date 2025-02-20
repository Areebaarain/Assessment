#include <stdio.h>

float convertCurrency(float amount, float exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    float amount, exchangeRate;
    char currencyType;
    
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter currency type (U for USD, S for SAR, A for AED): ");
    scanf(" %c", &currencyType);
    printf("Enter exchange rate to PKR: ");
    scanf("%f", &exchangeRate);
    
    float convertedAmount = convertCurrency(amount, exchangeRate);
    
    printf("PKR = %.2f\n", convertedAmount);
    
    return 0;
}
