#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2;
printf("\nEnter the variable number for a: \n");
scanf("%f",&a);
printf("\nEnter the variable number for b: \n");
scanf("%f",&b);
printf("\nEnter the variable number for c: \n");
scanf("%f",&c);
x1=(b+(sqrt(((b*b)+(4*a*c)))))/(2*a);
x2=(b+(sqrt(((b*b)-(4*a*c)))))/(2*a);
printf("\nThe real root of %f , %f and %f when positive is %0.3f ",a,b,c,x1);
printf("\nThe real root of %f , %f and %f when negeative is %0.3f ",a,b,c,x2);
return 0;
}
