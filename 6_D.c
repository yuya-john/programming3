/*-----------------------------------------------*/
/*-	Matrix Vector Multiplication                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int d=0, e, f=0, r=0, t, i, j, n, m, W, H, v=0, x[100000], y[4000], devisor=0, max= -1000000, min=1000000;
//double area=0, circumference=0, r=0;
int A[101][101], b[101], c[101];
char suit[60][5];
int rank[60];
char suit_missing[10];
int sort[5][15];
int building[5][4][11];

int main(void){
    /*入力*/
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i=1; i<=m; i++){
        scanf("%d", &b[i]);
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            c[i] += A[i][j]*b[j];
        }
        printf("%d\n", c[i]);
    }




    return 0;
    }
