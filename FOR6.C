#include<stdio.h>
#include<conio.h>
main()
{
int a,n;
clrscr();
printf("enter value of n=");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
if(a%2==0)
{
printf("%d\n",a);
}
}
getch();
}

