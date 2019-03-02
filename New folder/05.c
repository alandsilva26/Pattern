/* 
3 2 1 
3 2 1
3 2 1 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,rows,c;
	//prompt user to enter a number and read input
	printf("Enter number of rows:");
	scanf("%d",&rows);
	//creates copy
	c=rows;
	//first loop iterates through the rows 
	for(i=1;i<=rows;i++)
	{
		//second loop iterates through each coloum in each row
		for(j=1;j<=rows;j++)
		{
			//the first number is printed by value of c i.e. the last number
			printf("%d\t",c);
			//incrementing k
			c--;
		}
		printf("\n");\
		//reset the value of c
		c=rows;
	}
	getch();
	return 0;
}