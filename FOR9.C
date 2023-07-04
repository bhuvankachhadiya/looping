#include<stdio.h>
#include<conio.h>
main()
{
int a=1,f=1,n;
clrscr();
printf("enter value of n=");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
f=f*a;
}
printf("n!=%d\n",f);
getch();
}

