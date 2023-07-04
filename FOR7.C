#include<stdio.h>
#include<conio.h>
main()
{
int a,n;
clrscr();
printf("enter value of n=");
scanf("%d",&n);
for(a=2000;a<=n;a++)
{
if(a%4==0)
{
printf("%d\n",a);
}
}
getch();
}

