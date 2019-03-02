/*
      4
    3 4
  2 3 4
1 2 3 4   
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows;
	printf("Enter Number of rows:");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf("\t");
		}
		//here j is already at the number that we need to print
		//thus we just need to set the condition 
		for(j;j<=rows;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}

	getch();
	return 0;
}