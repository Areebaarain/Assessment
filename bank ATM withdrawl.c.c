#include <stdio.h>

int main() {
    float account_balance, withdrawal_amount;
    char special_permit;

    // Input the customer's account balance and withdrawal amount
    
	printf("Enter your account balance:");
    scanf("%f", &account_balance);
    
    printf("Enter the amount you want to withdraw:");
    scanf("%f", &withdrawal_amount);

    // Check if account balance is sufficient for the withdrawal amount
    
	if (account_balance >= withdrawal_amount) {

        // If withdrawal amount is more than 10,000, check for special permit
       
	    if (withdrawal_amount > 10000) {
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &special_permit);  

            // Check if the user has the special permit
           
		    if (special_permit == 'Y' || special_permit == 'y') {
                printf("Withdrawal successful!\n");
            } else {
                printf("Withdrawal denied. Special permit required for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal successful!\n");
        }
    } else {
        printf("Insufficient balance. Withdrawal denied.\n");
    }

    return 0;
}
