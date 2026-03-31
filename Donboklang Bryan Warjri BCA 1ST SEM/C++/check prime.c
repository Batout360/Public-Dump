#include<stdio.h>
void check(int);
int main()
{
int a;
printf("Enter the number to check if its a prime number or not :");
scanf("%d",&a);
check(a);
return 0;
}

void check(int x)
{
{
if (x%1==0 && x%2!=0 && x%11!=0)
printf("%d It is a prime number",x);
else
printf("%d Is not a prime number",x);
} 
printf("\nEnd"); 
}
