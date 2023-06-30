#include<stdio.h>
#include<conio.h>
main()
{
int a=1,n;
clrscr();
printf("plz enter proper value of n=");
scanf("%d",&n);
while(a<=n)
{
 if(a%2==0)
 {
 printf("%d\n",a);
 }
 a++;
}
getch();
}