/*
E  
E D  
E D C  
E D C B  
E D C B A   
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows,c;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	//ASCII value of A is 65
	//if we add 64 to the number entered by the user we get the ASCII of A
	//thus we use %c instead of %d to print out a character instead of a integer
	for(i=1;i<=rows;i++)
	{
		c=rows+64;
		for(j=1;j<=i;j++)
		{
			printf("%c\t",c);
			c--;
		}
		printf("\n");
	}
	getch();
	return 0;
}