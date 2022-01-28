#include<stdio.h>
void check(int,int);
int main()
{
int a,b;
printf("Enter a number");
scanf("%d",&a);
printf("Enter a number");
scanf("%d",&b);
check(a,b);
return 0;
}
void check(int x,int y)
{
if(x==y)
printf("Number are equal");
else
printf("Number not equal");
}
