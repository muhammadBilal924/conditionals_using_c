#include<stdio.h>
void main ()
{
int a,b,c ,max;

printf("Enter first number");
scanf("%d",&a);
printf("Enter scond number");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("The maximum number is %d",max);
}
