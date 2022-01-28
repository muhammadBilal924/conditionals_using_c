#include<stdio.h>
int main()
{ char ch;
printf("Enter any character");
scanf("%c",&ch);
if((ch>='A')&&(ch<='Z'))
printf("the charactr%c is a small case latter\n",ch);
else if((ch>='a')&&(ch<='z'))
printf("the character%c is a small case latter\n",ch);
else if((ch>='0')&&(ch<='9'))
printf("the character%c is a digit\n",ch);
else
printf("the character %c is a symbol\n",ch);
}
