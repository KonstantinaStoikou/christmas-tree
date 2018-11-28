/* File: christmastree.c */
#include <stdio.h>
#include <stdlib.h>
#define LINES 10

int main(void){
	int curline,col,s,i,j,height,width;
	for (curline = 1; curline <= LINES ; curline++){
		for (col = 1; col <= LINES - curline; col++){
			printf(" ");
		}
		s=0;
		for (col = 1; col <= 2*curline - 1 ; col++){
			if (rand() % 100 >= 90) printf("O");
			else printf("*");
			s+=1;
		}
		printf("\n");
	}
	height = LINES/2;
	width = s/5;
	for (i = 1; i <= height; i++){
		for (j = 1; j <= s/2 - width; j++){
			printf(" ");
		}
		for (j = 1; j <= 2*width ; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
