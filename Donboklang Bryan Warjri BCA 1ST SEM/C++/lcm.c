#include<stdio.h>
void chk(int a,int b);
int main()
{
int a,b;
printf("Enter your First Number :");
scanf("%d",&a);
printf("Enter your Second Number :");
scanf("%d",&b);
chk(a,b);
return 0;
}
void chk(int a,int b)
{
int i,lcm,gdc;
for(i=1;i<=a && i<=b;i++){
if(a%i==0 && b%i==0){
	gdc=i;
	}
}
lcm=a*b/gdc;
printf("\nThe lcm of %d and %d is %d",a,b,lcm);
}
