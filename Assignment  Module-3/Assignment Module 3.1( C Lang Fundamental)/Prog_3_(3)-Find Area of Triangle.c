//Program-3-(3).WAP to find area of Triangle
#include<stdio.h>
main()
{
	int base, height;
	float area;
	
	printf("Enter the value of base =");
	scanf("%d",&base);
	
	printf("Enter the value of height =");
	scanf("%d",&height);
	
	area=(base*height)/2;
	
	printf("The area of triangle =%f", area);
}
