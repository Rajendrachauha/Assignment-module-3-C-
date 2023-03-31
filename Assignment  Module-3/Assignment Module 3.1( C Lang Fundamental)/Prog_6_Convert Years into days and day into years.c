//Program-6.WAP to convert years into days and Days into years.....
#include<stdio.h>
main ()
{
		int  year, days;
		
		printf("ENTER THE DAYS:");
		scanf("\n%d",&days);
		
			year=days/365;
			printf("\nTHE YEARS YEARS = %d",year);
		
		printf("\n\nENTER YEARS: ");  
	   	scanf("\n%d", &year);  
	     
			days= year*365;
			printf("\nIN YEAR THE DAYS ARE = %d", days);
   		

}
