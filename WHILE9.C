#include<stdio.h>
#include<conio.h>
main()
{
int a=1,f=1,n;
clrscr();
printf("n=");
scanf("%d",&n);
while(a<=n)
{
 f=a*f;
 a++;

}
printf("nfactorial=%d",f);
getch();
}