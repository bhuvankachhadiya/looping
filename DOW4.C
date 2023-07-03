#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,n;
	 clrscr();
	 printf("enter value of n=");
	 scanf("%d",&n);
	 do
	 {
	 printf("%d\n",a);
	 a--;
	 }while(a>=n);
	 getch();
}