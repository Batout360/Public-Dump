#include <stdio.h>
#include<math.h>
int main()
{
 int i,j;
 printf("%d",2);
for (i=3; i<=100; i++)
{
for (j=2;j<i;j++)
{
if(i%j==0)
break;
if(j>sqrt(i))
{
printf("\n%d",i);
break;
}
}
}
printf("\nEnd"); 
return 0;
}
