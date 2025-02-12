#include <stdio.h>

float calculateZakat(float totalWealth, float goldPrice, float silverPrice) {
    
    float nisabGold = 87.48 * goldPrice;
    float nisabSilver = 612.36 * silverPrice;
    float nisabThreshold = (nisabGold < nisabSilver) ? nisabGold : nisabSilver;
    
    if (totalWealth >= nisabThreshold) {
        return totalWealth * 0.025;
    } else {
        return 0.0;
    }
}

int main() {
    float totalWealth, goldPrice, silverPrice;
  
    printf("Enter your total wealth in PKR: ");
    scanf("%f", &totalWealth);
    
    printf("Enter the current gold price per gram in PKR: ");
    scanf("%f", &goldPrice);
    
    printf("Enter the current silver price per gram in PKR: ");
    scanf("%f", &silverPrice);
  
    if (totalWealth < 0 || goldPrice <= 0 || silverPrice <= 0) {
        printf("Invalid input! All values must be greater than zero.\n");
        return 1;
    }
    
    float zakatAmount = calculateZakat(totalWealth, goldPrice, silverPrice);
    if (zakatAmount > 0) {
        printf("Zakat payable: PKR %.2f\n", zakatAmount);
    } else {
        printf("Your wealth does not meet the Nisab threshold, no Zakat is required.\n");
    }
    
    return 0;
}
