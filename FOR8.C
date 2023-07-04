#include<stdio.h>
#include<conio.h>
main()
{
int a,s=0,n;
clrscr();
printf("enter value of n=");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
s=s+a;
}
printf("sum=%d\n",s);

getch();
}

