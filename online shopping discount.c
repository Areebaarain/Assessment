#include <stdio.h>

int main() {
    float purchaseAmount, finalAmount;
    char isMember;

    // Input: Purchase amount
   
    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);

    // Check discount eligibility based on purchase amount and membership status
  
    if (purchaseAmount > 2000) {
        
		// Ask if the user is a member
        
		printf("Are you a member? (Y/N): ");
        scanf(" %c", &isMember);  

        if (isMember == 'Y' || isMember == 'y') {
           // Apply 20% discount for members
            finalAmount = purchaseAmount * 0.8;
            printf("20%% discount applied.\n");
        } else if (isMember == 'N' || isMember == 'n') {
            // Apply 10% discount for non-members
            finalAmount = purchaseAmount * 0.9;
            printf("10%% discount applied.\n");
        } else {
            printf("Invalid input. Please enter 'Y' or 'N'.\n");
            return 1; 
			 // Exit the program if input is invalid
        }
    } else {
        // No discount if purchase amount is less than 2000
        finalAmount = purchaseAmount;
        printf("No discount applied.\n");
    }

    // Display the final amount after discount
    printf("Final amount to be paid: %.2f\n", finalAmount);

    return 0;
}
