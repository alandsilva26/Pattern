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
	int i,j,k,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		k=i-1;
		for(j=1;j<=rows;j++)
		{
			if(j<rows-i)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("%d\t",k);
				k--;
			}
		}
		printf("\n");	
	}
	getch();
	return 0;
}