/* 
* * * * * * * * * *   
* * * *     * * * *  
* * *         * * *  
* *             * *  
*                 *
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
		for(j=i;j<=rows;j++)
		{
			printf("*\t");
		}
		for(j=2*(i-1);j>0;j--)
		{
			printf("\t");
		}
		for(j=i;j<=rows;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	getch();
	return 0;
}