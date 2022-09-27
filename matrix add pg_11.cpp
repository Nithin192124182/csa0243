include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,row,col;
	
	printf("\nEnter the row and column size");
	scanf("%d%d",&row,&col);
	printf("\nEnter the matrix1:");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	printf("\nEnter the matrix2:");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	c[i][j]=a[i][j]+b[i][j];
	printf("\nThe sum is\n");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++){
	
	printf("%d\t",c[i][j]);
	}
	printf("\n");
}
getch();
}
