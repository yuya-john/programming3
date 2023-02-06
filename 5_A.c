/*-----------------------------------------------*/
/*-	Print a Rectangle                           -*/
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
    while(1){
        scanf("%d %d", &H, &W);
        if(H==0&&W==0){
            return 0;
        }
        for(i=1; i<=H; i++){
            for(j=1; j<=W; j++){
                printf("#");
                if(j==W){
                    printf("\n");
                }
            }

            if(i==H){
                printf("\n");
            }
        }
    }







    //scanf("%lf", &r);//1 2
    //
    //scanf("%d %d %d", &a, &b, &c);//3 8 1
    //scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);//5 4 2 2 1

    /*処理*/

    /*出力*/

    return 0;
}