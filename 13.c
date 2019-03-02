/*
1 2 3 4 *  
1 2 3 * 5  
1 2 * 4 5 
1 * 3 4 5  
* 2 3 4 5 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=rows;j++)
		{
			if(j==i)
			{
				printf("*\t");
			}
			else
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}