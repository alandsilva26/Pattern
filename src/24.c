/*
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/

//Note: If you use number above 9 then the box will not be rendered properly.

//This problem is part of HackerRank questions
//This algorithm struck me in the bathroom. 
//I have used two for loops.
//I am open to any other modified algo.

#include <stdio.h>
#include<conio.h>

int main() 
{

    int n;
    int count;
    int number;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    //first half
  	for(int i = 0; i < n; i++) {
  	    number = n;
  	    count = i;
        for(int j = 0; j < n; j++) {
            if(count == 0) {
                printf("%d ", number);
            } else {
                printf("%d ", number);
                number = number - 1;
                count = count - 1;
            }
        }
        count = (n - 1);
        for(int j = 0; j < (n - 1); j++) {
            if(count == i) {
                number = number + 1;
                printf("%d ", number);
            } else {
                printf("%d ", number);
                count = count - 1;
            }
        }
        printf("\n");
    }

    //second half
    for(int i = (n - 1); i > 0; i--) {
  	    number = n;
  	    count = i;
        for(int j = 0; j < n; j++) {
            if(count == 1) {
                printf("%d ", number);
            } else {
                printf("%d ", number);
                number = number - 1;
                count = count - 1;
            }
        }
        count = n - i;
        for(int j = 0; j < (n - 1); j++) {
            if(count == 0) {
                number = number + 1;
                printf("%d ", number);
            } else {
                printf("%d ", number);
                count = count - 1;
            }
        }
        printf("\n");
    }

    getch(); 
    return 0;
}


