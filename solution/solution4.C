/*write a program to enter 5 string and search user inputed string is available in array or not.
name:JESWAL ABHISHEK.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k=0;
	char a[5][20],b[20];
	clrscr();
	printf("enter five names:\n");
	for(i=0;i<5;i++)
		gets(a[i]);
	clrscr();
	printf("enter string which you want to serch.:");
	gets(b);
	for(i=0;i<5;i++)
	{
		if(strcmp(a[i],b)==0)
			k=1;
	}
	if(k==1)
		printf("string \"%s\" is available.",b);
	else
		printf("string \"%s\" is not available.",b);
	getch();
}