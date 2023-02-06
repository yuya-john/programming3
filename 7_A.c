/*-----------------------------------------------*/
/*-	Matrix Vector Multiplication                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int d=0, e, t, i, j, n, W, H, v=0, x[100000], y[4000], devisor=0, max= -1000000, min=1000000;
//double area=0, circumference=0, r=0;
int m[60], f[60], r[60];
char suit[60][5];
int rank[60];
char suit_missing[10];
int sort[5][15];
int building[5][4][11];

int grading(int score, int r){
    int sum = score;
    if(80<=sum){
        printf("A\n");
        return 0;
    } else if(65<=sum && sum<80){
        printf("B\n");
        return 0;
    } else if(50<=sum && sum<65){
        printf("C\n");
        return 0;
    } else if(30<=sum && sum<50){
        if(50<=r){
            printf("C\n");
            return 0;
        } else {
            printf("D\n");
            return 0;
        }
    } else {
        printf("F\n");
        return 0;
    }
}

int main(void){
    /*入力*/
    i=0;
    do {
        i++;
        scanf("%d %d %d", &m[i], &f[i], &r[i]);



    } while ((m[i]==-1 && f[i]==-1 && r[i]==-1)==0);
    i--;
    j=i;

    for(i=1; i<=j; i++){
        /*処理*/
        if (m[i]==-1 || f[i]==-1){
            printf("F\n");
        } else {
            grading(m[i]+f[i], r[i]);
        }



    }
/*
    for(j=1; j<=i; j++){
        if(m[j]!=-1 && f[j]!=-1){
            grading(m[j]+f[j]);
        } else if(f[j]!=-1 && r[j]!=-1){
            grading(f[j], r[j]);
        } else if(m[j]!=-1 && r[j]!=-1){
            grading(m[j], r[j]);
        } else {
            printf("F\n");
        }
    }
    */

    return 0;
    }
