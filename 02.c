/* 
1 
1 2 
1 2 3 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,n=5;
	//same as 01 but the values printed in each row is equal to #of row 
	//eg. 1 has 1
	//eg. 2 has 1 2
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
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