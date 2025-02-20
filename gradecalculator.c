#include <stdio.h>

int main() {
    double subject1, subject2, subject3, average;
    char grade;
    
    printf("Enter marks for subject 1: ");
    scanf("%lf", &subject1);
    
    printf("Enter marks for subject 2: ");
    scanf("%lf", &subject2);
    
    printf("Enter marks for subject 3: ");
    scanf("%lf", &subject3);
    
    average = (subject1 + subject2 + subject3) / 3;
    
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';
    
    printf("Average Marks: %.2lf\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}
