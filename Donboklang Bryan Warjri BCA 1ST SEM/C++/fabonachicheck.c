#include<stdio.h>
#include<stdlib.h>
void chk(int);
int main()
{
  int n;
    printf("Enter a number to check if fibonacci or not = ");
      scanf("%d",&n);
      chk(n);
      return 0;
  }

void chk(int n)  
{
  int x1=0,x2=1,x3,f=0;
  
  
  
    if(n==x1 || n==x2)
    { 
      printf("%d is a fibonacci number",n);
       exit(1);
       //return 1;
    }
    while(x2<=n)
    {
      x3=x2;
      x2=x1+x2;
      x1=x3;
    
     if(x2==n)
     {
       f=1;
       break;
     }
    }
    if(f)
      printf("%d is a fibonacci number.",n);
    else
      printf("%d is not a fibonacci number.",n);
}
      
    
    
