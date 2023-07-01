#include<stdio.h>
#include<conio.h>
main()
{
int a=1,n,x;
clrscr();
printf("enter number=");
scanf("%d",&n);
printf("how many times=");
scanf("%d",&x);
while(a<=x)
{
printf("%d*%d=%d\n",a,x,a*x);
a++;
}

getch();
}