/*write a program to enter two 3*3 matrix and print the multiplication of it.
name:Jeswal Abhishek*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	clrscr();
	printf("\n\nenter values in first matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tenter value for element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	clrscr();
	printf("\n\nenter values in second matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tenter value for element b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	clrscr();
	printf("\nyour first matrix a is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nyour second matrix b is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("\nmultiplication of two matrix a*b is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
