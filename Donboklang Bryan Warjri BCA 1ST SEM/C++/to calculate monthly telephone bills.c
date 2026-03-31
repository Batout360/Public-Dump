#include<stdio.h>
void rural();
//void urban();
int main ()
{
int n;
printf("\t\tMENU\t\t\n");	
printf("\nPlease Enter your subcribtion Service \n 1 for Urban \n 2 for Rural");
printf("\nEnter your choice :");
scanf("%d",&n);
{if (n==1)
rural();
//else if (n==2)
//ruban();
else
printf("ERROR INVALID INPUT");
}
return 0;
}
void rural()
{
int a,b,c,d,e,i;
float t;
printf("\nEnter the number of calls that the customer has made :");
scanf("%d",&a);

if (a<=250){
printf("The user has made %d call and nothing is owed",a);}
else if (a>250 || a<=450){
b=251;
for (i=251;i<=a;i++)
{	b=i-250;
	t=b*0.60;	
}
printf("The amount owed by the customer is %0.2f and calls made after free are %d ",t,b);}
else if (a>450 && a<=500){
c=451;
for (i=451;i<=a;i++)
{	c=i-450;
	t=c*0.80;	
}
printf("The amount owed by the customer is %0.2f and calls made after free are %d ",t,c);}
else if (a>500 && a<=1000){
d=501;
for (i=501;i<=a;i++)
{	d=i-500;
	t=d*1.00;	
}
printf("The amount owed by the customer is %0.2f and calls made after free are %d ",t,d);}
else if (a>=1000){
e=1001;
for (i=1001;i<=a;i++)
{	e=i-1000;
	t=e*1.20;	
}
printf("The amount owed by the customer is %0.2f and calls made after free are %d ",t,e);}
else {
printf("INVALID INPUT");
}
}
