#include<stdio.h>
void cal(int x,int y);
int main (){
int l,b;
printf ("length of rectangle:");
scanf ("%d",&l);
printf ("breadth of rectangle:");
scanf ("%d",&b);
cal(l,b);
return 0;
}
void cal(int x, int y)
{
int area;
area=x*y;
printf ("area of a rectangle is =%d",area);
}
