#include <stdio.h>

int main() {
    double amount, discount = 0.0, final_amount;
    
    printf("Enter total shopping amount: ");
    scanf("%lf", &amount);
    
    if (amount > 5000)
        discount = amount * 0.20;
    else if (amount >= 3000 && amount <= 5000)
        discount = amount * 0.10;
    
    final_amount = amount - discount;
    
    printf("Total Amount: %.2lf\n", amount);
    printf("Discount Applied: %.2lf\n", discount);
    printf("Final Amount to Pay: %.2lf\n", final_amount);
    
    return 0;
}
