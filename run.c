#include<stdio.h>
#include<stdlib.h>

int main() {
	while(1) {
		printf("Enter 0 to quit");
		int n;
		scanf("%d", &n);
		if(n == 0) {
			exit(1);
		}
		system("cd src");
		system("./01");
	}
	return 0;
}