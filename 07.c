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
		//prints spaces
		for(j=1;j<=rows-i;j++)
		{
			printf(" \t");
		}
		//prints the first half of numbers
		/*
				1
			  1 2 
            1 2 3
          1 2 3 4 
		*/
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		//prints the second half
		/*
				
				 1
				 2 1 
                 3 2 1
			     4 3 2 1
		*/
		for(j=i-1;j>0;j--)
		{
			printf("%d\t",j);
		}
	 	printf("\n");
	}
	getch();
	return 0;
}