#include<stdio.h>
#include<conio.h>
main()
{
int a=10,n;
clrscr();
printf("plz enter proper value of n=");
scanf("%d",&n);
while(a>=n)
{
 printf("%d\n",a);
 a--;
}
getch();
}