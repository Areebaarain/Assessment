#include<stdio.h>
int main(){
    int number;

    printf("Enter a number (1-7):");
    scanf("%d",&number);

    if (number == 1) {
        printf("Monday\n");
    } else if (number == 2) {
        printf("Tuesday\n");
    } else if (number == 3) {
        printf("Wednesday\n");
    } else if (number == 4) {
        printf("Thursday\n");
    } else if (number == 5) {
        printf("Friday\n");
    } else if (number == 6) {
        printf("Saturday\n");
    } else if (number == 7) {
        printf("Sunday\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
    }
    