/*
      4         
    3 4 3     
  2 3 4 3 2      
1 2 3 4 3 2 1    
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows,c;
	printf("Enter number of rows:");
	scanf("%d",&rows);

	for(i=0;i<=rows;i++)
		{
			c=rows;
			for(j=1;j<=rows-i;j++)
			{
				printf("\t");
			}
			//now j is already at the number that we need to print
			//we just need to set the counter
			for(j;j<=rows;j++)
			{
				printf("%d\t",j);
			}
			//print the second part of the pyramid
			for(j=1;j<=i-1;j++)
			{
				c--;
				printf("%d\t",c);
			}
			printf("\n");
		}
		getch();
		return 0;
}