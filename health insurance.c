#include <stdio.h>

int main() {
    int age;
    char seriousillness;

    // Input: Age of the person
    
	printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility based on age and seriousillness
   
    if (age > 18) {
        if (age > 45) {
        	
            // Ask for seriousillness if age is above 45
           
		    printf("Have you had any serious illness? (Y/N): ");
            scanf(" %c", &seriousillness); 
            
			if (seriousillness == 'Y' || seriousillness == 'y') {
                printf("Sorry, you are not eligible for health insurance due to seriousillness.\n");
            } else if (seriousillness == 'N' || seriousillness == 'n') {
                printf("You are eligible for health insurance.\n");
            } else {
                printf("Invalid input. Please enter 'Y' or 'N'.\n");
            }
        } else {
            printf("You are eligible for health insurance.\n");
        }
    } else {
        printf("Sorry, you are not eligible for health insurance as you must be above 18.\n");
    }

    return 0;
}
