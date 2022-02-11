#include<conio.h>
#include<stdio.h>
void main()
{
 int i,j,a,b;
 clrscr();
 printf("enter n value: ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 for(j=1;j<=a-i;j++)
 {
  printf(" ");
  }
 for(b=0;b!=2*i-1;b++)
{
 printf("*");
 }
 printf("\n");
 }
 for(i=a-1;i<0;i--)
 {
  for(j=a-i;j>0;j--)
  {
  printf(" ");
  }
  for(b=2*i-1;b<0;b--)
  {printf("*");
  }
  }
  getch();
  }