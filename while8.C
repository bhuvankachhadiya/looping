#include<stdio.h>
#include<conio.h>
main()
{
int a=1,n,s=0;
clrscr();
printf("plz enter proper value of n=");
scanf("%d",&n);
while(a<=n)
{
 s=s+a;
 a++;
}
printf("sum=%d",s);
getch();
}