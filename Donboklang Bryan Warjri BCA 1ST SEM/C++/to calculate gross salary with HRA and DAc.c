#include<stdio.h>
int main()
{
  int n,HRA=0,DA=0,t=0;
   printf("Enter the salary of the employee = ");
     scanf("%d",&n);
   if(n<=10000)
   {
	 HRA=n*20/100;
	 DA=n*80/100;
	 t=n+HRA+DA;
	 printf("\nThe HRA Salary is %d ",HRA);
	 printf("\nThe DA Salary is %d ",DA);
	 printf("\nThe total gross salary with HRA and DA is = %d",t);
   }
   else if(n>10000 && n<=20000)
   {
	 HRA=n*25/100;
	 DA=n*90/100;
	 t=n+HRA+DA;
	 printf("\nThe HRA Salary is %d ",HRA);
	 printf("\nThe DA Salary is %d ",DA);
	 printf("\nThe total gross salary with HRA and DA is = %d",t); 
   }
   else
   {
	 HRA=n*30/100;
	 DA=n*95/100;
	 t=n+HRA+DA;
	 printf("\nThe HRA Salary is %d ",HRA);
	 printf("\nThe DA Salary is %d ",DA);
	 printf("\nThe total gross salary with HRA and DA is = %d",t); 
   }
   return 0;
	}
	
	
	
	
	
	
	
	
	
	
