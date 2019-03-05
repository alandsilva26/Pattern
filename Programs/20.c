/* 
1 1 1 1 1
0 0 0 0
1 1 1
0 0
1
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