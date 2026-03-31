#include<stdio.h>
//Structures 
struct Employee
   {
	char name[40];
	int ID; 
	float Salary;
	};
struct Employee s1,s2,s3;
void Employee1(struct Employee *s1);
void Employee2(struct Employee *s2);
void Employee3(struct Employee *s3);  
int main(){

//Employee 1
printf("\nEnter the name of Employee 1 :");
    scanf("%s",s1.name);
printf("\nEnter the Salary of %s :",s1.name);
    scanf("%f",&s1.Salary);
printf("\nEnter the ID (must be in numbers) of %s :",s1.name);
    scanf("%d",&s1.ID);
//Employee 2
printf("\nEnter the name of Employee 2 :");
    scanf("%s",s2.name);
printf("\nEnter the Salary of %s :",s2.name);
	scanf("%f",&s2.Salary);
printf("\nEnter the ID (must be in numbers)of %s :",s2.name);
	scanf("%d",&s2.ID);
//Employee 3
printf("\nEnter the name of Employee 3 :");
	scanf("%s",s3.name);
printf("\nEnter the Salary of %s :",s3.name);
	scanf("%f",&s2.Salary);
printf("\nEnter the ID (must be in numbers) of %s :",s3.name);
	scanf("%d",&s3.ID);
if(s1.Salary>s2.Salary && s1.Salary>s3.Salary){
Employee1(&s1);
}
else if(s2.Salary>s1.Salary && s2.Salary>s3.Salary){
Employee2(&s2);
}
else if(s3.Salary>s2.Salary && s3.Salary>s1.Salary){
Employee3(&s3);
}
else{
printf("\nAll of the employees salary are equal");
Employee1(&s1);
Employee2(&s2);
Employee3(&s3);
	}
return 0;
}

//Employee 1 information
void Employee1(struct Employee *s1){
printf("\nThe full information of %s are given below ",s1->name);
printf("\n---------------------------------------------------\n");
printf("\nName-%s",s1->name);
printf("\nSalary-%0.2f",s1->Salary);
printf("\nID :%d",s1->ID);
printf("\n---------------------------------------------------\n");
printf("\n-----------------------END-------------------------\n");}
//Student 2 information 
void Employee2(struct Employee *s2){ 
printf("\nThe full information of %s are given below ",s2->name);
printf("\n---------------------------------------------------\n");
printf("\nName-%s",s2->name);
printf("\nSalary-%0.2f",s2->Salary);
printf("\nID :%d",s2->ID);
printf("\n---------------------------------------------------\n");
printf("\n-----------------------END-------------------------\n");
}
//Student 3 information 
void Employee3(struct Employee *s3){
printf("\nThe full information of %s are given below ",s3->name);
printf("\n---------------------------------------------------\n");
printf("\nName-%s",s3->name);
printf("\nSalary-%0.2f",s3->Salary);
printf("\nID :%d",s3->ID);
printf("\n---------------------------------------------------\n");
printf("\n-----------------------END-------------------------\n");
}
