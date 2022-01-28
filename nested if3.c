#include<stdio.h>
int main()
{ char ch;
printf("enter any character");
scanf("%c",&ch);
if(ch=='A'||ch=='a'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
printf("you enterd a vowel%c",ch);
else
printf("you did not enter a vowel%c",ch);
}
