#include<stdio.h>
int main(){
float a,b,c,d,e,total;
float totalavg;
float a1,b2,c3,d4,e5,total2,totalavg2;
//Structures 
struct Students
   {
	char name[40];
	int age; 
	float marks;
	float avg;
	};
struct Students s1,s2;
printf("\nEnter the name of student 1 :");
scanf("%s",s1.name);
printf("\nEnter the age of %s :",s1.name);
scanf("%d",&s1.age);
printf("\nEnter the name of student 2 :");
scanf("%s",s2.name);
printf("\nEnter the age of %s :",s2.name);
scanf("%d",&s2.age);
//Student 1 information 

printf("\n\tEnter the marks for the student %s\t\n",s1.name);
printf("\nEnter the marks for maths\n");
scanf("%f",&a);
printf("\nEnter the marks for english\n");
scanf("%f",&b);
printf("\nEnter the marks for science\n");
scanf("%f",&c);
printf("\nEnter the marks for health\n");
scanf("%f",&d);
printf("\nEnter the marks for computer\n");
scanf("%f",&e);
total=(a+b+c+d+e);
totalavg=(a+b+c+c+d+e)/5;
s1.marks+=total;
s1.avg+=totalavg;
printf("\nThe full information of %s are given below ",s1.name);
printf("\n---------------------------------------------------\n");
printf("\nName-%s",s1.name);
printf("\nAge-%d",s1.age);
printf("\nThe total of marks-%0.2f",s1.marks);
printf("\nThe Avrage marks-%0.2f",s1.avg);
printf("\n---------------------------------------------------\n");
//Student 2 information 
printf("\n\tEnter the marks for the student %s\t\n",s2.name);
printf("\nEnter the marks for maths\n");
scanf("%f",&a1);
printf("\nEnter the marks for english\n");
scanf("%f",&b2);
printf("\nEnter the marks for science\n");
scanf("%f",&c3);
printf("\nEnter the marks for health\n");
scanf("%f",&d4);
printf("\nEnter the marks for computer\n");
scanf("%f",&e5);
total2=(a1+b2+c3+d4+e5);
totalavg2=(a1+b2+c3+d4+e5)/5;
s2.marks+=total2;
s2.avg+=totalavg2;
printf("\nThe full information of %s are given below ",s2.name);
printf("\n---------------------------------------------------\n");
printf("\nName-%s",s2.name);
printf("\nAge-%d",s2.age);
printf("\nThe total of marks-%0.2f",s2.marks);
printf("\nThe Avrage marks-%0.2f",s2.avg);
printf("\n---------------------------------------------------\n");
printf("\n-----------------------END-------------------------\n");
return 0;
}
