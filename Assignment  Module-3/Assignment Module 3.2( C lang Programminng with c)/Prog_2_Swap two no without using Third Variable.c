/*PROGRAM:-2

WAP to swap two numbers without using third variable */


#include<stdio.h>  
main()    
{    
	int a, b;   
	printf("Enter number of  a : \n");
	scanf("%d",&a);
	printf("Enter number of b : \n");
	scanf("%d",&b);   

	printf("\nBefore swap a=%d b=%d",a,b);
      
	a=a+b;    
	b=a-b;    
	a=a-b; 
   
	printf("\nAfter swap a=%d b=%d",a,b);    
 
}   
