#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,p;
	int c;
	k=0;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			k=k+i;
			printf("%d\t",k);
			p=k;
			for(j=i;j<=n+i-2;j++)
				{
					p=p+j;
					printf("%d\t",p);
				}
			printf("\n\n");
		}
	getch();
	return 0;
}