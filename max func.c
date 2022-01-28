#include<stdio.h>
//function Declaration
void maxNumber(int, int);
int main()
{
int num1,num2;
printf("to find maxNumber:\nEnter First Num ");
scanf("%d",&num1);
printf("Enter Second Num ");
scanf("%d",&num2);
//function Calling
// printf("\n%d is a Greater Num",maxNumber(num1,num2));
maxNumber(num1,num2);
}
//function Definition
void maxNumber(int num1, int num2){
//num1 =9; num2 =8}
if(num1<num2){
printf("Num 2 is Greater");
//return num2;
}
else{
printf("Num 1 is Greater");
//return num1;
}

}
