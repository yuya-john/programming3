/*-----------------------------------------------*/
/*-	Spreadsheet                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int a=0, b=0, c=0, d=0, e, t, i, j, k, n, r=0, W, H, v=0, x, y[4000], devisor=0, max= -1000000, min=1000000;
//double area=0, circumference=0, r=0;
//int sum_r=0, sum_c[110]=0;
int way=0;
int m[60], f[60];
char suit[60][5];
int rank[60];
char suit_missing[10];
int table[110][110];


int main(void){
    /*入力*/
    scanf("%d %d", &r, &c);
    for(i=1; i<=r; i++){
        for(j=1; j<=c; j++){
            scanf("%d", &table[i][j]);
            table[i][c+1]+=table[i][j];
            table[r+1][j]+=table[i][j];
            table[r+1][c+1]+=table[i][j];
        }
    }
    //printf("\n");

    for(i=1; i<=r+1; i++){
        for(j=1; j<=c+1; j++){
            printf("%d", table[i][j]);
            if(j==c+1){
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }

    return 0;
    }

/*
1 1 3 4 5 14
2 2 2 4 5 15
3 3 0 1 1 8
2 3 4 4 6 19
8 9 9 13 17 56
*/

/*
1 1 3 4 5 14
2 2 2 4 5 15
3 3 0 1 1 8
2 3 4 4 6 19
8 9 9 13 17 56
*/