#include<stdio.h>
#include<conio.h>
int main()
{
    float temp;
    printf("enter the temp in Celsius"); 
    scanf("%f",&temp);
    printf("%f Celsius is:%f Fahrenheit",temp,((temp)*9/5+32));
    getch();
    }