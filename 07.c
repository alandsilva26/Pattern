/* 
      1  
    1 2 1  
  1 2 3 2 1  
1 2 3 4 3 2 1 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf(" \t");
		}
		for(j=1;j<=(2*i-1)/2;j++)
		{
			printf("%d\t",j);
		}
		j--
		while(j>0)
		{
			printf("%d\t",j);
			j--;
		}
	 	printf("\n");
	}
	getch();
	return 0;
}