#include<stdio.h>
int main()
{
	float subject1,subject2,subject3,average;

	    printf("enter the marks for suject 1:");
	scanf("%f",&subject1);
	
		printf("enter the marks for suject2:");
	scanf("%f",&subject2);
	
		printf("enter the marks for suject3:");
	scanf("%f",&subject3);

	//caculate the average 
	
	  average=(subject1 + subject2 + subject3)/3;
	 
	 // determine pass\fail status and grade
	 
     if(average<50){
	printf("average:%.2f status:fail\n",average);}
	
	else if(average>70){
	printf("average:%.2f grade:A\n",average);}
	
	else{
		printf("average:%.2f grade B\n",average);}
		
		return 0;
		
	}
