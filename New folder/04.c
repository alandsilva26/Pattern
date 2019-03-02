/* 
1 2 3 
1 2 
1 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,rows;
	//same as 01 but the values printed in each row is equal to (rows+1-#no. of row) 
	//eg. 1 has 1 2 3
	//eg. 2 has 1 2
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=i;j--)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
		k=1;
	}
	getch();
	return 0;
}