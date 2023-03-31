/*PROGRAM :-1
WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo)*/



#include<stdio.h>
main()
{
	float a,b,c;
	char ch;
	
    printf("enter user choice to perform opration:");
    scanf("%c",&ch);
	
	printf("\nenter first number :");
	scanf("%f",&a);
	
	printf("enter second number :");
	scanf("%f",&b);
	

	
	switch(ch)
	{
		case '+':c=a+b;
		        printf("output=%f",c);
		        break;
		        
		case '-':c=a-b;
		        printf("output=%f",c);
		        break;
		        
		case '*':c=a*b;
		        printf("output=%f",c);
		        break;
		        
		case '/':c=a/b;
		       printf("output=%f",c);
		       break;
		       
		default : printf("invalid opretion");
		       break;
		       
		       
		        
	}
}
