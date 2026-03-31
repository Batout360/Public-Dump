#include <stdio.h>
void  add();
void  sub();
void  div();
void  multi();
int main()
{
 int a;
 printf("\t\t MENU \t\t\nEnter the following number for\t\n1.Addition\t\n2.Subtraction\t\n3.Division\t\n4.Multiplication");
 printf("\nEnter your Choice : ");
 scanf("%d",&a);
 {
 if (a==1)
 add();
 else if (a==2)
 sub();
 else if(a==3)
 div();
 else if(a==4)
 multi();
 else
 printf("\n\tINVALID INPUT");
 printf("\n\tExiting the program");
}
return 0;
}
void  add() 
{
int x,y,z;
printf("\nEnter the first number for addition: ");
scanf("%d",&x);
printf("\nEnter the second number for addition: ");
scanf("%d",&y);
z=x+y;
printf("\nThe addtion of %d and %d = %d ",x,y,z);
printf("\n\tEnd of program"); 
} 

void  sub() 
{
int x,y,z;
printf("\nEnter the first number for subtraction: ");
scanf("%d",&x);
printf("\nEnter the second number for subtraction: ");
scanf("%d",&y);
z=x-y;
printf("\nThe subtraction of %d and %d =%d ",x,y,z);
printf("\n\tEnd of program"); 
} 

void  div() 

{
int x,y,z,a;
printf("\nEnter the first number for diviser: ");
scanf("%d",&x);
printf("\nEnter the second number for divident: ");
scanf("%d",&y);
z=x/y;
a=x%y;
printf("\nThe qution of %d from %d =%d ",x,y,z);
printf("\nThe remander of %d from %d =%d ",x,y,a);
printf("\n\tEnd of program"); 
} 

void  multi() 
{
int x,y,z;
printf("\nEnter the first number for the first multiple: ");
scanf("%d",&x);
printf("\nEnter the second number for : ");
scanf("%d",&y);
z=x*y;
printf("\nThe multiple  of %d X %d = %d ",x,y,z);
printf("\n\tEnd of program"); 
} 
