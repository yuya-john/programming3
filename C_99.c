/*-----------------------------------------------*/
/*-	Matrix Multiplication                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int a=0, b=0, c=0, d[101], e, t, i, j, k, l, m, n, r=0, W, H, v=0, x, y[4000];
int N_origami, D_length, total_length;
int table[110][110];
static long A[110][110], B[110][110], C[110][110];

int main(void){
    /*入力*/
    scanf("%d %d", &N_origami, &D_length);//3 4 //N:折り紙の枚数　//D:折り紙の一辺の長さ
    total_length=D_length;
    for(i=2; i<=N_origami; i++){
        scanf("%d", &d[i]);//d[i]だけ前の折り紙に重なっている //2 1
        total_length+=(D_length-d[i]);
        //printf("%d", total_length);
    }
    printf("%d\n", total_length*D_length);


    return 0;
    }