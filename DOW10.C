#include<stdio.h>
#include<conio.h>
main()
{
int a=1,n;
clrscr();
printf("enter number to see it's multiplication table=");
scanf("%d",&n);
do
{
 printf("%d*%d=%d\n",a,n,a*n);
 a++;
}while(a<=10);


getch();
}