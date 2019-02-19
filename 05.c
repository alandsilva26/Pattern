/* 
3 2 1 
3 2 1
3 2 1 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,n,c;
	//prompt user to enter a number and read input
	printf("Enter a number:");
	scanf("%d",&n);
	//creates copy
	c=n;
	//first loop iterates through the rows 
	for(i=1;i<=n;i++)
	{
		//second loop iterates through each coloum in each row
		for(j=1;j<=n;j++)
		{
			//the first number is printed by value of c i.e. the last number
			printf("%d\t",c);
			//incrementing k
			c--;
		}
		printf("\n");\
		//reset the value of c
		c=n;
	}
	getch();
	return 0;
}