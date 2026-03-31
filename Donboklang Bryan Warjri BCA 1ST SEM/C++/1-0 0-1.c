#include<stdio.h>
void rev();

int main()
{
int a;
printf("Enter your number: ");
scanf("%d",&a);
rev(a);
return 0;
}

void rev(int x)
{
int i=0;
while(x>=i)
{
printf("\n%d",i);
i++;
}
printf("\nNow in reverse");
x=0;
i--;
while(x<=i)
{
printf("\n%d",i);
i--;
}
printf("\nEnd of program");
}

