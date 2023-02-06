/*-----------------------------------------------*/
/*-	Reversing Numbers                       -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>



int main(void){
    int a[11000], b, c, d=0, t, i, j, n, W, H, x[100000], y[4000], devisor=0, max= -1000000, min=1000000;
    double area=0, circumference=0, r=0;
    //int *N;
    long sum=0;
    //double f=0;

    /*入力*/
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(i=1; i<=n; i++){
        printf("%d", a[n-i+1]);
        if(i==n){
            printf("\n");
        } else {
            printf(" ");
        }
    }


    /*ここから*/

    }

//86 212 419 10 627 51 515 113 758 838