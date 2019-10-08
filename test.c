/* 
1 2 3 
1 2 3
1 2 3
*/
#include<stdio.h>
int main()
{
	int i,j,k=1,rows;
	//prompt user to enter a number and read input
	printf("Enter number of rows:");
	scanf("%d",&rows);
	//first loop iterates through the rows 
	for(i=1;i<=rows;i++)
	{
		//second loop iterates through each coloum in each row
		for(j=1;j<=rows;j++)
		{
			//the first number is printed by value of k
			printf("%d\t",k);
			//incrementing k
			k++;
		}
		printf("\n");\
		//reset the value of k
		k=1;
	}
	return 0;
}