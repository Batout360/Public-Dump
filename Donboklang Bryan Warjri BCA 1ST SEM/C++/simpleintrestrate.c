#include <stdio.h>
void angle(float a,float b,float c);
int main()
{
 float a,b,c;
 printf("Welcome to calculating your rate of intrest");
 printf("\nEnter your Principle: ");
 scanf("%f",&a);
 printf("\nEnter your Rate: ");
 scanf("%f",&b);
 printf("\nEnter your Time: ");
 scanf("%f",&c);
 angle(a,b,c);
 return 0; 
}
 void angle(float a,float b,float c)
 {
float si;
 printf("\nYour Principle is %0.2f",a);
 printf("\nYour Rate is %0.2f percent",b);
 printf("\nYour Time is %0.2f Years",c);
 si=(a*b*c)/100;
 printf("\nYour Intrest rate is %0.2f",si);
}
