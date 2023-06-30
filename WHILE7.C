#include<stdio.h>
#include<conio.h>
main()
{
int a=2000,n=3000;
clrscr();
printf("leap years from 2000 to 3000");
while(a<=n)
{
if(a%4==0)
{
 printf("%d\n",a);
}
a++;
}
getch();
}