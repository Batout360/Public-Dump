#include<stdio.h>
void cal(float a,float b,float c);
int main()
{
float a,b,c;
printf("\nWelcome to finding the Student is eligible for admission");
printf("\nEnter the marks for Maths= ");
scanf("%f",&a);
printf("\nEnter the marks for Physics= ");
scanf("%f",&b);
printf("\nEnter the marks for Chemistry= ");
scanf("%f",&c);
printf("\nThe Result of the student are= ");
cal(a,b,c);
return 0;
}
void cal(float a,float b,float c)
{
float total;
printf("\nMaths=%0.2f",a);
printf("\nPhysic=%0.2f",b);
printf("\nChemistry=%0.2f",c);
total=(a+b+c);
printf("\nStudent total %0.2f",total);
{
if (a>=60 && b>=50 && total>=200 && c>=40)
printf("\nThe Student secured a seat in the school");
else 
printf("\nThe Student did not secured a seat in the school");
}
}
