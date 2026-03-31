#include <stdio.h>
void check (int);
int main()
{
 int a;
 printf("\nEnter your number: ");
 scanf("%d",&a);
 printf("\nThe number entered is = %d",a);
 check(a);
return 0;
}
 void check (int a)
 {
if (a>0)
printf("\nThe number is greater than zero there for it is a positive\n");
else if(a<0)
printf("\nThe number is less than zero therefore it is a negetive\n");
else 
printf("\nThe number is equal to 0\n");
}
