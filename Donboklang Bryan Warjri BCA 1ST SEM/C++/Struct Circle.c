#include<stdio.h>
int main(){
//Structures 
struct Circle
   {
	float raduis; 
	float premeter;
	float area;
	};
struct Circle c1,c2;
printf("\nEnter the Radus of Cirlce 1 :");
scanf("%f",&c1.raduis);
printf("\nEnter the Radus of Circle 2 :");
scanf("%f",&c2.raduis);
//Circle1 information 
printf("\nThe full information of Cirlce 1 is given below ");
printf("\n---------------------------------------------------\n");
c1.area=(22/7)*c1.raduis*c1.raduis;
printf("\n THE area of cirlce 1 is :%0.2f",c1.area);
c1.premeter=2*(22/7)*c1.raduis;
printf("\n THE Premeter of cirlce 1 is :%0.2f",c1.premeter);
printf("\n---------------------------------------------------\n");
//Student 2 information 
printf("\nThe full information of Circle 2 is  given below ");
printf("\n---------------------------------------------------\n");
c2.area=(22/7)*c1.raduis*c1.raduis;
printf("\n THE area of cirlce 1 is :%0.2f",c2.area);
c2.premeter=2*(22/7)*c1.raduis;
printf("\n THE Premeter of cirlce 1 is :%0.2f",c2.premeter);
printf("\n---------------------------------------------------\n");
printf("\n-----------------------END-------------------------\n");
return 0;
}
