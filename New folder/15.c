/*
      1         
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,rows;
	printf("Enter number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf("\t");
		}
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k++;
		}
		k=k-2;
		for(j=i-1;j>=1;j--)
		{
			printf("%d\t",k);
			k--;
		}
		printf("\n");
	}
	getch();
	return 0;
}