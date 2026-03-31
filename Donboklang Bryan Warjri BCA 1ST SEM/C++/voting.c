#include <stdio.h>
void age(int);
int main()
{
int b;
printf("Enter the age of canidate:\n");
scanf("%d",&b);
printf("\nThe age of the Canidate is %d ",b);
age(b);
return 0;
}
void age(int x)
{
{
if(x>=18)
printf("The canidate is qulified for voting ");
else
printf("The canidate is no qulified for for voting");
}	
}

