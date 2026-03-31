#include <stdio.h>
void cal(int x);
int main()
{
int n;  
printf("Enter the number :");
scanf("%d",&n);
cal(n);
return 0;
}
void cal(int x)
{
int r,rv=0,t;
t=x;
while(x!=0)
{
	r=x%10;
	rv=rv*10+r;
	x=x/10;
 }
    if(t==rv)
    printf("\nIT is a palandrome");
    else
    printf("\nIT is  nota palandrome");
}
