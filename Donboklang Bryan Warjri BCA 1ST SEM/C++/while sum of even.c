#include<stdio.h>
#include<math.h>
void loop (int);
int main()
{
int n;
printf("\nEnter the number you want to enter:");
scanf("%d",&n);
loop(n);
return 0;
}
void loop (int n)
{
int a,li,s=0;
printf("Enter the limit");
scanf("%d",&li);
while(n<=li){
	a=n*n*n;
	s=a;
	n=n+2;
}
printf("\nThe sum of cube up to %d is %d ",li,s);
}

