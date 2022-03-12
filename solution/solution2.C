/*write a program to enter 3*3 matrix and check it is diagonal matrix or not.
name:Jeswal Abhishek*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,c=0;
	clrscr();
	printf("\nplese enter the matrix a.:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tenter element for a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	clrscr();
	printf("you have entred matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j&&a[i][j]!=0)
				c=1;
		}
		printf("\n");
	}
	if(c!=1)
		printf("the matrix which is given by you is diagonal matrix.");
	else
		printf("the matrix which is given by you is not diagonal matrix.");
	getch();
}