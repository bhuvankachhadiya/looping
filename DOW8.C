#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,s=0,n;
	 clrscr();

	 printf("enter value of n=");
	 scanf("%d",&n);
	 do
	 {

	 s=s+a;
	 a++;
	 }while(a<=n);
	 printf("sum=%d",s);
	 getch();
}
