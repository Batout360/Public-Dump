#include<stdio.h>
void test(int a);
int main()
{
int a,b;
printf("-----------------Start---------------------\n");
printf("\nEnter your number:");
scanf("%d",&a);
printf("\nThe number you have entered is:");
test(a);
printf("\n\n");
printf("\n-------------------END------------------------");
printf("\nDo you want to Restart the program?");
printf("\n Enter 1 if yes 2 if no:");
scanf("%d",&b);
if (b==1)
{
printf("--------------RESTARTING PROGRAM--------------\n");
main();
}
else if (b==2){
printf("\n---------------------Thank You For Using the program----------------------\n");
}
else{
printf("\n--------------------------Error INVALID INPUT--------------------------\n");
}
return 0;
}
void test(int a)
{
switch (a)
{
//1 to 10
case 1:
printf("ONE");
break;
case 2:
printf("Two");
break;
case 3:
printf("Three");
break;
case 4:
printf("Four");
break;
case 5:
printf("Five");
break;
case 6:
printf("Six");
break;
case 7:
printf("Seven");
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
//11 to 20
case 11:
printf("11");
break;
case 12:
printf("Twelve");
break;
case 13:
printf("Thirteen");
break;
case 14:
printf("Fourteen");
break;
case 15:
printf("Fifteen");
break;
case 16:
printf("Sixteen");
break;
case 17:
printf("Seventeen");
break;
case 18:
printf("Eighteen");
break;
case 19:
printf("Nineteen");
break;
case 20:
printf("Twenty");
break;
//21 to 30
case 21:
printf("Twenty One ");
break;
case 22:
printf("Twenty Two");
break;
case 23:
printf("Twenty Three");
break;
case 24:
printf("Twenty Four");
break;
case 25:
printf("Twenty Five");
break;
case 26:
printf("Twenty Six");
break;
case 27:
printf("Twenty Seven");
break;
case 28:
printf("Twenty Eight");
break;
case 29:
printf("Twenty Nine");
break;
case 30:
printf("Thirty");
break;
//31 to 40
case 31:
printf("Thirty One ");
break;
case 32:
printf("Thirty Two");
break;
case 33:
printf("Thirty Three");
break;
case 34:
printf("Thirty Four");
break;
case 35:
printf("Twenty Five");
break;
case 36:
printf("Thirty Six");
break;
case 37:
printf("Thirty Seven");
break;
case 38:
printf("Thirty Eight");
break;
case 39:
printf("Thirty Nine");
break;
case 40:
printf("Fourty");
break;
//41 to 50
case 41:
printf("Fourty One ");
break;
case 42:
printf("Fourty Two");
break;
case 43:
printf("Fourty Three");
break;
case 44:
printf("Fourty Four");
break;
case 45:
printf("Fourty Five");
break;
case 46:
printf("Fourty Six");
break;
case 47:
printf("Fourty Seven");
break;
case 48:
printf("Fourty Eight");
break;
case 49:
printf("Fourty Nine");
break;
case 50:
printf("Fifty");
break;
//51 to 60
case 51:
printf("Fifty One ");
break;
case 52:
printf("Fifty Two");
break;
case 53:
printf("Fifty Three");
break;
case 54:
printf("Fifty Four");
break;
case 55:
printf("Fifty Five");
break;
case 56:
printf("Fifty Six");
break;
case 57:
printf("Twenty Seven");
break;
case 58:
printf("Fifty Eight");
break;
case 59:
printf("Fifty Nine");
break;
case 60:
printf("Sixty");
//61 to 70
break;
case 61:
printf("Sixty One ");
break;
case 62:
printf("Sixty Two");
break;
case 63:
printf("Sixty Three");
break;
case 64:
printf("Sixty Four");
break;
case 65:
printf("Sixty Five");
break;
case 66:
printf("Sixty Six");
break;
case 67:
printf("Thirty Seven");
break;
case 68:
printf("Sixty Eight");
break;
case 69:
printf("Sixty Nine");
break;
case 70:
printf("Seventy");
break;
//71 to 80
case 71:
printf("Seventy One ");
break;
case 72:
printf("Seventy Two");
break;
case 73:
printf("Seventy Three");
break;
case 74:
printf("Seventy Four");
break;
case 75:
printf("Seventy Five");
break;
case 76:
printf("Seventy Six");
break;
case 77:
printf("Seventy Seven");
break;
case 78:
printf("Seventy Eight");
break;
case 79:
printf("Seventy Nine");
break;
case 80:
printf("Eighty");
break;
//81to90
case 81:
printf("Eighty One ");
break;
case 82:
printf("Eighty Two");
break;
case 83:
printf("Eighty Three");
break;
case 84:
printf("Eighty Four");
break;
case 85:
printf("Eighty Five");
break;
case 86:
printf("Eighty Six");
break;
case 87:
printf("Eighty Seven");
break;
case 88:
printf("Eighty Eight");
break;
case 89:
printf("Eighty Nine");
break;
case 90:
printf("Ninty");
break;
//91 to 100
case 91:
printf("Ninty One ");
break;
case 92:
printf("Ninty Two");
break;
case 93:
printf("Ninty Three");
break;
case 94:
printf("Ninty Four");
break;
case 95:
printf("Ninty Five");
break;
case 96:
printf("Seventy Six");
break;
case 97:
printf("Ninty Seven");
break;
case 98:
printf("Ninty Eight");
break;
case 99:
printf("Seventy Nine");
break;
case 100:
printf("Hundred");
break;
}
}
