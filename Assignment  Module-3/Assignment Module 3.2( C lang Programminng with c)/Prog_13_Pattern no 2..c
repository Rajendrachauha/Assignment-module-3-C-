/* Program-13.MAke patter
A
B C
D E F
G H I J
K L M N O 
*/
#include<stdio.h>
main()
{
	int i,j,n;
	char ch ='A';
	
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			
			if(ch<'Z')
			ch++;
			else
			ch='A';
		}
		printf("\n");
	}
}
