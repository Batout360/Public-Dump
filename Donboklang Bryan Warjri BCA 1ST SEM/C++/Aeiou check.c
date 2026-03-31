#include <stdio.h>
char check(char);

int main()
{
char ch;
printf("Enter your charater: ");
scanf("%c",&ch);
check(ch);
return 0;
}
char check(char x)
{
{
if (x==('A'||'E'||'I'||'O'||'U') || x==('a'||'e'||'i'||'o'))
printf("\n %c is a vowel ",x);
else
printf("\n %c is a conidtenst ",x);
}
return 0;
}
