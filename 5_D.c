/*-----------------------------------------------*/
/*-	Structured Programming                       -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int check_num(int x, int i){
    if(x%3==0){
        printf(" %d", x);
        return 0;
    } /*3の倍数ならOK*/
    do{
        if(x%10==3){
            printf(" %d", i);
            return 0;
        }
        x/=10;
    } while(x); /*どれかの位に3があればOK*/
    return 0;
}

int main(void){
    int a[11000], b, c, d=0, t, i, j, n, W, H, x[100000], y[4000], devisor=0, max= -1000000, min=1000000;
    double area=0, circumference=0, r=0;
    int *N;
    long sum=0;
    double f=0;

    /*入力*/
    scanf("%d", &n);

    /*ここから*/
    i=1;
    do {
        check_num(i, i);
    } while(++i<=n);
    printf("\n");

    return 0;
    }

