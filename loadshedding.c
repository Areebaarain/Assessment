#include<stdio.h>
#include<conio.h>

void showloadsheddingschedule(char city[]){

printf("load shedding schedule for %s:\n",city);
printf("monday:6 AM -8 AM,6PM -8PM\n");
printf("tuesday:7AM - 9AM ,5PM -7PM\n");
printf("wednesday:8AM -10 AM,4PM -6PM\n");
printf("thursday: 9AM -11AM,3PM -5PM\n");
printf("friday: 10AM -12PM,1PM -3PM\n");
printf("saturday:11AM -1AM,1PM -3PM\n");
printf("sunday:12PM -2PM,12PM -2PM\n");
}
int main(){
	char city[20];
	printf("enter you city name:");
	scanf("%19s",city);
	showloadsheddingschedule(city);
	return 0;
}

