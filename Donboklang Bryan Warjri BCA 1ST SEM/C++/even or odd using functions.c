#include <stdio.h>
void ref(int);
int main()
{
 int a;
 printf("\nEnter your number: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
 ref(a);
 return 0;
}
void ref(int x) 
{
{
if (x%2==0)
printf("\nThe number is an Even number");
else 
printf("\nThe number is an odd number");
} 
}
