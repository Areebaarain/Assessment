#include<stdio.h>
int main()
{
float math,science;
printf("enter math score(percentage):");
scanf("%f",&math) ;

printf("enter science score(percentage):");
scanf("%f",&science);

if(math>=50 && science>=50){
printf("the student is eligible for admission:");
}
else{
printf("the student is not eligible for admission:");}

if("math_score>80 && science_score>80") {
printf("the student is qualify for the scholarship\n:");}

else{
printf("the student is not qualify for the scholarship\n:");}

return 0;

}



 