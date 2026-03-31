#include<stdio.h>
void cal(float g,float h,float i,float j,float k);
int main()
{
float a,b,c,d,e;
printf("\n\tWelcome to finding the avrage of a subject\t\n");
printf("\nEnter the marks for maths\n");
scanf("%f",&a);
printf("\nEnter the marks for english\n");
scanf("%f",&b);
printf("\nEnter the marks for science\n");
scanf("%f",&c);
printf("\nEnter the marks for health\n");
scanf("%f",&d);
printf("\nEnter the marks for computer\n");
scanf("%f",&e);
cal(a,b,c,d,e);
return 0;
}
void cal (float g,float h,float i,float j,float k)
{
float total;
printf("\nThe Result of the student are\n");
printf("\nMaths=%0.2f",g);
printf("\nEnglish=%0.2f",h);
printf("\nScience=%0.2f",i);
printf("\nHealth=%0.2f",j);
printf("\nComputer=%0.2f",k);
total=(g+h+i+j+k)/5;
printf("\nStudent average=%0.2f",total);
{
if (total>=60 && total<=100)
printf("\nThe Student secured first div");
else if(total>=45 && total<=59 )
printf("\nThe student secured 2nd div");
else 
printf("\nThe student secured 3rd div");
}
}
