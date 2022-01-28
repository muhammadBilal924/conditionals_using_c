#include<stdio.h>
int main()
{ int b=6,c=5;
if(b++==7&&++c==5)
{ b*=c;
printf("%d\n",++b);
}
else
printf("%d\n",b--);

}
