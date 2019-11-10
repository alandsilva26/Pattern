/* 
5  
4 4   
3 3 3    
2 2 2 2  
1 1 1 1 1  
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);

	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=rows+1-i;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	getch();
	return 0;
}