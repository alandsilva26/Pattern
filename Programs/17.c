/* 
* * * * * * * * *   
* * * *   * * * *  
* * *       * * *  
* *           * *  
*               * 
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
		for(j=1;j<=rows+1-i;j++)
		{
			printf("*\t");
		}
		for(j=1;j<=2*(i-1)-1;j++)
		{
			printf("\t");
		}
		for(j=1;j<=rows+1-i;j++)
		{
			/*
			here the first and second row of the second part have the same number of rows
			thus when we print the first row the number of stars printed are one less
			*/
			if(i==1 && j==1)
			{
				j++;
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}