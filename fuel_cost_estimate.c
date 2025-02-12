#include <stdio.h>
 
float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    return (distance / fuelAverage) * fuelPrice;
}

int main() {
    float distance, fuelAverage, fuelPrice;
     
    printf("Enter the total trip distance (km): ");
    scanf("%f", &distance);
    
    printf("Enter the vehicle's fuel consumption (km/liter): ");
    scanf("%f", &fuelAverage);
    
    printf("Enter the current per liter fuel price (PKR): ");
    scanf("%f", &fuelPrice);
    
    if (distance <= 0 || fuelAverage <= 0 || fuelPrice <= 0) {
        printf("Invalid input! All values must be greater than zero.\n");
        return 1;
    }
    
    float totalFuelCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    printf("Total Fuel Cost: PKR %.2f\n", totalFuelCost);
    
    return 0;
}
