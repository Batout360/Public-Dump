
#include <stdio.h>

int main()
{
int a,b,c,d,e;
printf("\nEnter the number you want:");
scanf("%d",&a);
{
if(a>0 && a<11)
one(a);
printf("and");
else if (a>=11 && a<=19)
teens(a);
printf("and");
else if (a=>10 && a<=90)
tens(a);
printf("and");
else if (a=>100 && a<=900)
thundred(a);
printf("and");
else if (a=>1000 && a<9000)
thousand()

}

ones()
{
switch(a)
{
case 0:
printf("Zreo")
break;
case 1
printf("One");
break;
case 2:
printf("Two");
break;
case 3:
printf("Three");
break;
case 4:
printf("Four");
break
case 5:
printf("Five")
break;
case 6
printf("Six");
break;
case 7:
printf("Sevem");
break;
case 8:
printf("Eight");
break;
case 9:
printf("Nine");
break;
case 10:
printf("Ten");
break;
default:
printf("\nInvalad input");
}
}

teens()
{
switch(b)
{
case 11
printf("eleven");
break;
case 12:
printf("tweleve");
break;
case 13:
printf("Thirteen");
break;
case 14:
printf("forteen");
break
case 15:
printf("fifteen")
break;
case 16:
printf("sixteen");
break;
case 17:
printf("seventeen");
break;
case 18:
printf("eighteen");
break;
case 19:
printf("nineteen");
break;
default:
printf("\nInvalad input");
}
}
}
tens()
{
switch(b)
{
case 10
printf("ten");
break;
case 20:
printf("twenty");
break;
case 30:
printf("Thirty");
break;
case 40:
printf("forty");
break
case 50:
printf("fifty")
break;
case 60:
printf("sixty");
break;
case 70:
printf("seventy");
break;
case 80:
printf("eighty");
break;
case 90:
printf("ninety");
break;
default:
printf("\nInvalad input");
}
}

hundred()
{
switch(b)
{
case 100
printf("One Hundred");
break;
case 200:
printf("Two Hundred");
break;
case 300:
printf("Three Hundred");
break;
case 400:
printf("Four Hundred");
break
case 500:
printf("Five Hundred")
break;
case 600:
printf("Six Hundred");
break;
case 700:
printf("Seven Hundred");
break;
case 800:
printf("Eight Hundred");
break;
case 900:
printf("Nine Hundred");
break;
default:
printf("\nInvalad input");
}
}
thousand()
{
switch(b)
{
case 1000
printf("One Thousand");
break;
case 2000:
printf("Two Thousand");
break;
case 3000:
printf("Three Thousand");
break;
case 4000:
printf("Four Thousand");
break
case 5000:
printf("Five Thousand")
break;
case 6000:
printf("Six Thousand");
break;
case 7000:
printf("Seven Thousand");
break;
case 800:
printf("Eight Thousand");
break;
case 9000:
printf("Nine Thousand");
break;
default:
printf("\nInvalad input");
}
}
printf("End of program");
return 0;
}

