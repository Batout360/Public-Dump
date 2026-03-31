#include<stdio.h>
void prime(int n);
int main()
{
  int n;
   printf("Enter a number = ");
     scanf("%d",&n);
   prime(n);
   return 0;
}
void prime(int n)
{ 
 int x,j,count2=0,count=0;
  for(x=1;x<=n;x++)
   { count=0;
	 for(j=1;j<=n;j++)
	   {
		if(x%j==0)
	    count++;
	   }  
	 if(count==2){
      printf("%4d",x);
       count2++;}
      if(count2==10)
      {printf("\n");
      count2=0;}
      else
      continue;
 }
 }
 
 
 
