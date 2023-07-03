#include<stdio.h>
#include<conio.h>
main()
{
int a=1,f=1,n;
clrscr();
printf("enter value of n=");
scanf("%d",&n);
do
{
f=f*a;
a++;
}while(a<=n);
printf("n!=%d",f);
getch();
}
