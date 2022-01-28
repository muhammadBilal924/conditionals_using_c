#include<stdio.h>
int main()
{ char grade=B;
printf(" your grade%c\n",grade);
scanf("%c",grade);
switch(grade)
{ case'A':
printf("exelante!\n");
break;
case'B':
case'C':
printf("welldon\n");
break;
case'D':
printf("your passed");
break;
default:
printf("invaliud number");
}
}
