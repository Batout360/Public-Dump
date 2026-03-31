#include <stdio.h>
void check(char);
int main()
{
char ch;
printf("Enter your charater: ");
scanf("%c",&ch);
check(ch);
return 0;
}
void check(char ch)
{
if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
printf("\n %c is a letter", ch);
else if (ch>='0' && ch<='9')
printf("%c is a digit", ch);
else
printf("\n %c is a special charater", ch);
}


