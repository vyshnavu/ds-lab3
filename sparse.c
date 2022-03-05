#include<stdio.h>
int main()
{
	int i,j,k=0;
	int size=0;
	int r,c;
	printf("Enter the no of rows:");
	scanf("%d",&r);
	printf("Enter the no of columns:");
	scanf("%d",&c);
	int s[r][c];
	printf("Enter the matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("position[%d,%d]:",(i+1),(j+1));
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((s[i][j])!=0)
			size=size+1;
		}
	}
	int(a[size][3]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			if((s[i][j])!=0)
			{
				a[k][1]=i+1;
				a[k][2]=j+1;
				a[k][3]=s[i][j];
				k++;
			}
		}
	}
	
	printf("rows\tcolumn\tvalue\n");
	for(k=0;k<size;k++)
	{
		printf("%d\t%d\t%d\n",a[k][1],a[k][2],a[k][3]);
	}
	return 0;
}
