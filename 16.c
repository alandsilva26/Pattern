/* 
        5           
      5 4   
    5 4 3   
  5 4 3 2  
5 4 3 2 1    
*/
#include<stdio.h>
#include<conio.h>
int man()
{
	int i,j,k,rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=0;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf("\t'");
		}
		k=rows;
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k--;
		}
		printf("\n");
	}
	getch();
	return 0;
}