 /* Program-15 make patter no -4.
	        *
	        **
	        ***
	        ****
	        *****
	        ****
	        ***
	        **
	        *
	        
*/  	
 #include <stdio.h>

int main()
{
    int i, j, r;
    printf("enter number:");
	scanf("%d",&r);

    for (i = 1; i <= r; i++)
        
        {
            for (j = 1; j <= i; j++) 

            {
                printf("*"); 
                
            }
            printf("\n");
            
        }
	        for (i = r; i >= 1; i--)
	    {
	        for (j = 2; j <= i; j++)
	        {
	            printf("*");
	        }
	        printf("\n");
	    }
    
}

