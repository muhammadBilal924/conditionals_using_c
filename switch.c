#include<stdio.h>

int main()
{ int a,b;
char op;
printf("enter 1st number,operator and 2nd number");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{ case'+':
printf("%d+%d=%d",a,b,a+b);
break;
case'_':
printf("%d-%d=%d",a,b,a-b);
break;
case'*':
printf("%d*%d=%d",a,b,a*b);
break;
case'/':
printf("%d/%d=%d",a,b,a/b);
break;
case'%':
printf("%d%%d=%d",a,b,a%b);
break;
default:
printf("invaluid number");
}
}
