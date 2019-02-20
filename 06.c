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


	/*
	This for loop has a special conditions since the number of rows printed is not equal to the number entered by the user
	*/
    for(i=1;i<(2*n-1)/2;i++)
	{  
		//prints spaces
		/*

		*/
		for(j=1;j<n-1-i;j++)
		{
			printf(" \t");
		}
		//here the count of numbers printed is odd
		//hence we use the condition for odd numbers
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d\t",k);
			k++;
		}
		//reset value of k
		k=1;
		printf("\n");
	}
	getch();
	return 0;
}