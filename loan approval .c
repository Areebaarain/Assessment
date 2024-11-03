#include <stdio.h>
int main()
 {
    float monthly_income;
    char existing_loan;
    char overdue_payments;

    // Input monthly income
   
    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);

    // Check if income is greater than 30,000
    
	if (monthly_income > 30000) {
        
        printf("Do you have an existing loan? (y/n): ");
        scanf(" %c", &existing_loan);

        // If they have an existing loan, check for overdue payments
        
		if (existing_loan == 'y' || existing_loan == 'Y') {
            printf("Do you have any overdue payments? (y/n): ");
            scanf(" %c", &overdue_payments);

            // Check if there are no overdue payments
           
		    if (overdue_payments == 'n' || overdue_payments == 'N') {
                printf("You are eligible for the loan.\n");
            } else {
                printf("You are not eligible for the loan due to overdue payments.\n");
            }
        } else {
            // Eligible if no existing loan
            printf("You are eligible for the loan.\n");
        }
    } else {
        // Not eligible if income is less than 30,000e
        printf("You are not eligible for the loan due to insufficient income.\n");
    }

    return 0;
}
