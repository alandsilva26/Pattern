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
		for(j=i;j<=rows;j++)
		{
				printf("%d\t",j);
		}
		for(j=i-1;j>0;j--)
		{
				printf("%d\t",j);
		}
		printf("\n");	
	}
	getch();
	return 0;
}