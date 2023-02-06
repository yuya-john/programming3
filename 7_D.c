/*-----------------------------------------------*/
/*-	Matrix Multiplication                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, n, r=0, W, H, v=0, x, y[4000];
int table[110][110];
static long A[110][110], B[110][110], C[110][110];

int main(void){
    /*入力*/
    scanf("%d %d %d", &n, &m, &l);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%ld", &A[i][j]);
        }
    }
    for(i=1; i<=m; i++){
        for(j=1; j<=l; j++){
            scanf("%ld", &B[i][j]);
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=l; j++){
            for(k=1; k<=m; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
            printf("%ld", C[i][j]);
            //printf("C[%d][%d] = %ld", i, j, C[i][j]);
            if(j!=l){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }

    return 0;
    }