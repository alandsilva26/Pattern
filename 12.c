/*
5  
5 4  
5 4 3  
5 4 3 2  
5 4 3 2 1 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>rows-i;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
	return 0;
}