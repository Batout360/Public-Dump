#include <stdio.h>
void cube(int x);
int main()
{
 int a;
 printf("\nEnter your number: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
 cube(a);
 return 0;
}
void cube(int x) 
{
int cub;
cub=x*x*x;
printf("\nThe cube of %d is %d",x,cub);
} 

