//Program -3-(1)WAP to find area of circle
#include <stdio.h>
main()
 {
   float  area, pi = 3.14;
   float radius;
   
   printf("ENTER THE VALE OF R:");
   scanf("%f",&radius);
   
   area = pi* radius * radius;
   
   printf("The area of circle is %f", area);
   
}
