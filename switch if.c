#include<stdio.h>
int main()
{ int x,y;
char op;
printf("enter 1st number operator and 2nd number");
scanf("%d%c%d",&x,&op,&y);
switch(op)
{ case'+':
printf("%d+%d=%d",x,y,x+y);
break;
case'-':
printf("%d-%d=%d",x,y,x-y);
break;
case'*':
printf("%d*%d=%d",x,y,x*y);
break;
case'/':
printf("%d/%d=%d",x,y,x/y);
break;
case'%':
printf("%d%d=%d",x,y,x%y);
break;
default:7*
printf("invaluid number");
}
}
