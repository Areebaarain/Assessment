#include<stdio.h>
#include<conio.h>
float calculateGPA(int marks){
	if(marks>=85){
	return 4.0;
	}else if(marks>=80 && marks<=84){
	return 3.7;
	}else if(marks>=75 && marks<=79){
	return 3.3;	
	}else if(marks>=70 && marks<=74){
	return 3.0;	
	}else if(marks>=65 && marks<=69){
	return 2.7;	
	}else if(marks>=60 && marks<=64){
	return 2.3;	
	}else{
	return 0.0;	
}
}
int main(){
	
float marks;
printf("enter marks");
scanf("%f",&marks);
float GPA=calculateGPA((int) marks);
printf("GPA:%.2f\n",GPA);
return 0;
}