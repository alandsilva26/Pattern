/* 
1 2 3 4 5 
2 3 4 5 1
3 4 5 2 1 
4 5 3 2 1
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
		for(j=1;j<=rows;j++)
		{
			if(j%2==0)
			{
				printf("0\t");
			}
			else
			{
				printf("1\t");
			}
		
		}
		printf("\n");	
	}
	getch();
	return 0;
}