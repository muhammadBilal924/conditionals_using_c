#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter first number");
scanf("%d",&num1);
printf("Enter second number");
scanf("%d",&num2);
printf("Enter third number");
scanf("%d",&num3);
if(num1>num2&&num1>num3)
{
printf("num1 grater than is num2 and num3");
}
else if(num2>num1&&num2>num3)
{
printf("num2 grater than is num1 and num3");
}
else if(num3>num1&&num3>num2){
printf("num3 grater than num1 and num2");
}
else if(num1=num2=num3)
printf("your number are equal");
else
printf("invalid input");

}
