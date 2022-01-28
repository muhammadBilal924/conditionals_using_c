#include<stdio.h>
int main()
{ int var1,var2;
printf("input the value var1");
scanf("%d",&var1);
printf("input the value var2");
scanf("%d",&var2);
if(var1!=var2){
printf("var1 is not equal var2");
}
else if(var1>var2)
{
printf("var1 is grater than var2");
}
else if(var2>var1)
{printf("var2 is grater than var1");
}
else{
printf("var1 is equal to var2");
}
}
