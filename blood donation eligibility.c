#include<stdio.h>
int main()
{

int age;
float weight;

printf("enter the age:");
scanf("%d", &age);

printf("enter your weight in Kg:") ;
scanf("%f",&weight);

if (age>=18 && weight <=65){
printf("you are eligible to donate blood\n");}

else{
printf("you are not eligible to donate blood due to age\n");}

if(weight>50){
printf("you are not eligible to donate blood due to weight\n");}
 
 return 0;

}
 


