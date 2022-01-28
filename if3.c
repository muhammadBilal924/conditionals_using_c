#include<stdio.h>
int main()
{ int a,b,c,max;
printf("Enter first number20");
scanf("%d",&a);
printf("Enter second number30");
scanf("%d",&b);
printf("Enter third number12");
scanf("%d",&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("the maximum number is %d",max);
}
