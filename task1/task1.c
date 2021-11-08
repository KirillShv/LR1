#include <stdio.h>
#include<math.h>

void main(void)
{
	double x = 30;					
	double f;						
	f = tan(2 * x) + (1 / cos(x));
	printf("x = %.4lf\n", x);		    
	printf("f = %.4lf\n", f);		
	printf("x = ");					 
	scanf_s("%lf", &x);				
	f = tan(2 * x) + (1 / cos(x));
	printf("f = %.4lf\n", f);					
}

