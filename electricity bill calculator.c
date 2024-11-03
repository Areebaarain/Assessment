#include <stdio.h>

int main() {
    int units;
    float billAmount = 0.0;

    // Input: Units consumed
   
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on units consumed
   
    if (units <= 100) {
        // No charge for units <= 100
        billAmount = 0;
    } else if (units <= 200) {
        // 5 rupees per unit for units between 101 and 200
        billAmount = (units - 100) * 5;
    } else if (units <= 300) {
        // 5 rupees per unit for first 100 units between 101 and 200, and
        // 8 rupees per unit for units between 201 and 300
        billAmount = (100 * 5) + ((units - 200) * 8);
    } else {
        // 5 rupees per unit for 101-200, 8 rupees per unit for 201-300,
        // and 10 rupees per unit for units above 300
        billAmount = (100 * 5) + (100 * 8) + ((units - 300) * 10);
    }

    // Display the final bill amount
    printf("Total electricity bill: %.2f rupees\n", billAmount);

    return 0;
}
