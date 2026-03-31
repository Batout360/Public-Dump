#include<stdio.h>
void cal(float);
int main()
{
float a;
printf("\nEnter the worker's hourly wages\n");
scanf("%f",&a);
cal(a);
return 0;
}
void cal(float a)
{
float b,c,d;
printf("\n%.02f is the hourly wage of the worker",a);
printf("\nthe worker has got a pay increace of 1.5 percent");
b=a*1.5;
printf("\nWhich is equal to :%0.2f",b);
printf("\nEnter the number of hours the worker has worked :");
scanf("%f",&d);
c=b*d;
printf("\nTherefore the wokrer as to be paid is: %0.2f",c);
}
