/*
    1
  1 2 3
1 2 3 4 5 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,n;
	printf("Enter a number");
	scanf("%d",&n);
	//Here we will use two nested for loops 
	//One to print spaces 
	//One to print numbers
	for(i=1;i<=n;i++)
	{  
		//prints spaces
		/*if n=5 then the loop will print two spaces as (5-i)/2=2 since i=1*/
		for(j=1;j<=(n-i)/2);j++
		{
			printf(" \t");
		}
		//here the count of numbers printed is odd
		//hence we use the condition for odd numbers
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d\t",k);
		}
		k=1;
		printf("\n");
	}
}