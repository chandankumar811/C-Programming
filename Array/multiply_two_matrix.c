#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	int rows1, column1, rows2, column2, res_rows, res_cols;
	int matrix1[5][5], matrix2[5][5], res[5][5];
	
	printf("\n enter the number of rows in the first matrix: ");
	scanf("%d", &rows1);
	
	printf("\n enter the number of column in the first matrix: ");
	scanf("%d", &column1);
	
	printf("\n enter the number of rows in the second matrix: ");
	scanf("%d", &rows2);
	
	printf("\n enter the number of rows in the second matrix: ");
	scanf("%d", &column2);
	
	if(column1!=rows2)
	{
		printf("The number of column in first matrix is must equal to the number of rows in second  matrix");
	}
	res_rows = rows1;
	res_cols = column2;
	
	printf("\n Enter the element of the first matrix");
	printf("\n**********************************");
	
	for(i=0; i<rows1; i++)
	{
		for(j=0; j<column2; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("\n Enter the element of the second matrix");
	printf("\n**********************************");
	
	for(i=0; i<rows2; i++)
	{
		for(j=0; j<column2; j++)
		{
			scanf("%d",  &matrix2[i][j]);
		}
	}
	
	for(i=0; i<res_rows; i++)
	{
		j=0;
		for(j=0; j<res_cols; j++)
		{
			res[i][j]=0;
			for(k=0; k<res_cols; k++)
			{
				res[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	printf("\n The element of the product matrix are: ");
	printf("\n**********************************");
	
	for(i=0; i<res_rows; i++)
	{
		printf("\n");
		for(j=0; j<res_cols; j++)
		{
			printf("\t %d", res[i][j]);
		}
	}
	return 0;
}
