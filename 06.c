/*
    1
  1 2 3
1 2 3 4 5 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	//Here we will use two nested for loops 
	//One to print spaces 
	//One to print numbers


	for(i=1;i<=rows;i++)
	{
		//prints spaces
		for(j=1;j<=rows-i;j++)
		{
			printf(" \t");
		}
		//prints numbers
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d\t",k);
			k++;
		}
		k=1;
		printf("\n");
	}
	getch();
	return 0;
}