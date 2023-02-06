/*-----------------------------------------------*/
/*-	Print a Chessboard                          -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
    int a[11000], b, c, d=0, t, i, j, n, W, H, x[100000], y[4000], devisor=0, max= -1000000, min=1000000;
    double area=0, circumference=0, r=0;
    long sum=0;
    double f=0;

    /*入力*/
    do {
        scanf("%d %d", &H, &W);
        if(H==0 && W==0){
            return 0;
        }
        for(i=1; i<=H; i++){
            if(i%2==1){
                for(j=1; j<=W; j++){
                    if(j%2==1){
                        printf("#");
                    } else {
                        printf(".");
                    }
                    if (j==W){
                        printf("\n");
                    }
                }
            } else {
                for(j=1; j<=W; j++){
                    if(j%2==1){
                        printf(".");
                    } else {
                        printf("#");
                    }
                    if (j==W){
                        printf("\n");
                    }
                }
            }

        }
        printf("\n");




    } while(1);
    return 0;
    }