#include<stdio.h>
#include<conio.h>
main()
{
int a=1,n;
clrscr();
printf("enter value of n to see it's multiplication table=");
scanf("%d",&n);
for(a=1;a<=10;a++)
{
printf("%d*%d=%d\n",a,n,a*n);
}


getch();
}

