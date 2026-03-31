#include<stdio.h>
void rural();
void urban();
int main ()
{
int n;
printf("\n\t\tMENU\t\t\n");	
printf("\nPlease Enter your subcribtion Service \n 0 for Exiting the program \n 1 for Urban \n 2 for Rural");
printf("\nEnter your choice :");
scanf("%d",&n);
if (n==1){
rural();}
else if (n==2){
urban();}
else if (n>=3||n<0){
printf("\nERROR INVALID INPUT\n");
main();}
else {
printf("EXTING PROGRAM");
}
return 0;
}

void rural()
{
int a,b,c,d,e;
int t=0,t2,r=200;
printf("\nEnter the number of calls that the customer has made :");
scanf("%d",&a);

if (a<=250){
printf("The user has made %d call and nothing is owed\n",a);}
else if (a>250 && a<=450){
b=250;
	b=a-b;
	t=b*0.60;
	t2=t+r;
printf("The amount owed by the customer is %d and calls made after free are %d plus fees of 200 total is %d \n ",t,b,t2);}
else if (a>250 && a<=500){
	c=a-250;
	t=c*0.80;
	t2=t+r;	
printf("The amount owed by the customer is %d and calls made after free are %d plus fees of 200 total is %d \n ",t,c,t2);}
else if (a>250 && a<=1000){
	d=a-250;
	t=d*1.00;
	t2=t+r;
printf("The amount owed by the customer is %d and calls made after free are %d plus fees of 200 total is %d \n ",t,d,t2);}
else if (a>1000){
	e=a-250;
	t=e*1.20;
	t2=t+r;	
printf("The amount owed by the customer is %d and calls made after free are %d plus fees of 200 total is %d \n ",t,e,t2);}
else {
printf("\nINVALID INPUT\n");
}
}


void urban()
{
int a,b,c,d,e;
int t=0,t2,r=240;
printf("\nEnter the number of calls that the customer has made :");
scanf("%d",&a);

if (a<=150){
printf("The user has made %d call and nothing is owed\n",a);}
else if (a>150 && a<=400){
b=150;
	b=a-b;
	t=b*0.60;
	t2=t+r;
printf("The amount owed by the customer is %d and calls made after free are %d plus fees of 240 total is %d \n ",t,b,t2);}
else if (a>250 && a<=500){
	c=a-250;
	t=c*0.80;	
printf("The amount owed by the customer is %d and calls made after free are %d\n ",t,c);}
else if (a>250 && a<=1000){
	d=a-250;
	t=d*1.00;
printf("The amount owed by the customer is %d and calls made after free are %d \n",t,d);}
else if (a>1000){
	e=a-250;
	t=e*1.20;	
printf("The amount owed by the customer is %d and calls made after free are %d \n",t,e);}
else {
printf("\nINVALID INPUT\n");
}
}
