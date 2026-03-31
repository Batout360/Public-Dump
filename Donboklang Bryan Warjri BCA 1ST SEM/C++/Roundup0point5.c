#include<stdio.h>
int main()
{
float n;
int k=0;
printf("Enter the number:");
scanf("%f",&n);
if(n<0)
{
k=k+n-0.5;}
else{
k=k+n+0.5;
}
printf("The number you have entered is %0.2f and the round up is %d",n,k);
return 0;
}
