#include <stdio.h>
void prime(int);
int main()
{
 int a;
 printf("\nEnter your number: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
 prime(a);
 return 0;
}
void prime(int x) 
{
{
int i;
for (i=2; i<=x; i++){
if (i%i==0 && i%2!=0)
printf("\n%d",i); 
}
printf("\nEnd"); 
} 
}
