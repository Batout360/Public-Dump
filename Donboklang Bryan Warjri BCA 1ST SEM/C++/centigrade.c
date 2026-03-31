#include <stdio.h>
void cal(float);
int main()
{
float cen;
printf("\nEnter the tempreture in celsious:");
scanf("%f",&cen);
printf("\nThe Tempreture entered in celsious is: %0.2f",cen);
cal(cen);
return 0;
}

void cal(float x)
{
{
if (x>=40)
printf("\nIts very hot");
else if(x>=30 && x<40)
printf("\nIts hot");
else if(x>=20 && x<30)
printf("\nIts Normal");
else if(x>=10 && x<20)
printf("\nIts cold weather");
else if(x>=0 && x<10)
printf("\nIts very cold weather");
else if(x<0)
printf("\nFreezing weather");
else 
printf("\nAnartic weather");
}	
}

