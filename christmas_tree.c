/* File: christmastree.c */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define color codes
#define YELLOW_B "\e[1;33m"
#define GREEN_B "\e[1;32m"
#define RED_B "\e[1;31m"
#define RESET "\033[0m"

int main(void) {
    int height;
    printf("Please give the height of the tree (how many lines to be).\n");
    scanf("%d", &height);

    srand(time(NULL));
    // create the crown of the tree
    for (int curline = 1; curline <= height / 2; curline++) {
        // fill with spaces the left side of the crown of the tree
        for (int col = 1; col <= height / 2 - curline; col++) {
            printf(" ");
        }
        // for every position in the tree place either an ornament(0) or an
        // asterisk(*) with a 10% chance of an ornament
        for (int col = 1; col <= 2 * curline - 1; col++) {
            if (rand() % 100 <= 10)
                printf(RED_B "0" RESET);
            else
                printf(GREEN_B "*" RESET);
        }
        printf("\n");
    }
    // create the trunk of the tree
    int width = (height - 1) / 5;
    for (int i = 1; i <= height / 4; i++) {
        // fill the spaces the left side of the trunk
        for (int j = 1; j <= (height - 1) / 2 - width; j++) {
            printf(" ");
        }
        // add hashtag symbols to represent the trunk
        for (int j = 1; j <= 2 * width; j++) {
            printf(YELLOW_B "#" RESET);
        }
        printf("\n");
    }
    return 0;
}
