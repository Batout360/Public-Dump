#include <stdio.h>
void chk(int);
int main()
{
 int a;
 printf("\nEnter your Sequence: ");
 scanf("%d",&a);
 chk(a);
 return 0;
}
void chk(int a)
 {
  int x1=0,x2=1,x3,x4=0;
 printf("\n%d",x1);
 printf("\n%d",x2);
for(x1=0;x4<a;x4++)
{
x3=x1+x2;
x1=x2;
x2=x3;
printf("\n%d",x3);
}
printf("\nEnd");
}
