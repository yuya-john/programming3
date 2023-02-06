#include <stdio.h>
int main(void){
    int a[4][3] = { {1,1,2},{2,3,6},{3,4,2},{4,5,1} };
    int b[3][4] = { {1,1,2,4},{2,3,4,1},{3,4,2,1} };
    int c[4][4] = { {0} };
    int i, j, k;

    for (k = 0; k < 4; k++) {
        for (j = 0; j < 4; j++) {
            for (i = 0; i < 3; i++) {
                c[k][j] += a[k][i] * b[i][j];
                //printf("%4d", c[k][j]);
            }
        }
    }

    
    for (k = 0; k < 4; k++) {
        for (j = 0; j < 4; j++) {
            printf(" %2d",c[k][j]);
        }
        putchar('\n');
    }


    return 0;
}