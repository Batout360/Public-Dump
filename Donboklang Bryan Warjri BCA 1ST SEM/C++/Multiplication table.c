#include <stdio.h>
void cal(int x);
int main()
{
int n;
printf("Enter your number for multiplication : ");
scanf("%d",&n);
cal(n);
return 0;
}
void cal(int x)
{
int i=0,j=0,c;
while(i<=9){
{
j++;
c=x*j;
i++;
printf("\n%d X %d = %d",x,j,c);
}
}
}
