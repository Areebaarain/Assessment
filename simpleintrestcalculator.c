#include <stdio.h>

int main() {
    double principal, rate, time, simple_interest;
    
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%lf", &time);
    
    simple_interest = (principal * rate * time) / 100;
    
    printf("Simple Interest: %.2lf\n", simple_interest);
    
    return 0;
}
