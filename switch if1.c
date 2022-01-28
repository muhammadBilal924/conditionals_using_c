#include<stdio.h>
int main()
{ float value;
char con;
printf("Enter conversion type\n");
printf("C for centimer\n");
printf("L for liters\n");
printf("K for kilometeers\n");
printf("G for kilograms\n");
printf("%c",&con);
printf("Emter a value");
scanf("%f",&value);
switch(con)
{ case'C':
case'c':
printf("value%f",value* 2.54);
break;
case'L':
case'l':
printf("value%f",value*3.785);
break;
case'K':
case'k':
printf("value%f",value*1.609);
break;
case'G':
case'g':
printf("value%f",value*.4536);
break;
default:
printf("invaluid conversion type");

}

}
