#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int i,j,rows,k;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		k=i;
		for(j=1;j<=rows;j++)
		{
			printf("%d\t",k);
			k=k+rows;
		}
		printf("\n");
	}
    return 0;
}
