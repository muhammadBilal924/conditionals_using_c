#include<stdio.h>
int  main()
{ int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("maximum number is %d",a);
else if(b>a&&b>c)
printf("maximum number is %d",b);
else
printf("maximum number is %d",c);
}
