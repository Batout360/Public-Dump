#include <math.h>
#include <stdio.h>

int main()
{
float n;
int k=0;
printf("Enter your number :");
scanf("%d",&n);
if(n<0){
k=k+n-0.5;
else
k=k+n+0.5;
}
printf("The number rounded up is %d",k);
return 0;
}

