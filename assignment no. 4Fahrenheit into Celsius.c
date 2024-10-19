#include<stdio.h>
#include<conio.h>
int main()
{   
    float temp;
    printf("enter the temp in Fahrenheit");
    scanf("%f", &temp);
    printf("%f Fahrenheit is:%f Celsius",temp,((temp-32)*5/9));
    getch();
}