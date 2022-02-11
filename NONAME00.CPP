#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char a[50],b[20];
 int i,j,n;
 clrscr();
 printf("enter the string 1: ");
 scanf("%c",a[50]);
 printf("enter the string2: ");
 scanf("%c",b[20]);
 n = strlen(a);
 for(i=0;i<n;i++)
 {
 for(j=n-1;j>=0;j--)
 {
 b[n][j]=a[n][i];
 }
 }
 printf("%c",b[n][j]);
 getch();
 }