/*-----------------------------------------------*/
/*-	Min, Max and Sum                            -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
    int a=0, b, c, d=0, t, i, j, W, H, x[100000], y[4000], devisor=0, opMode;
    double area=0, circumference=0, r=0;
    double f=0;
    char op[20];

    do{
        scanf("%d %s %d", &a, op, &b);//1 2
        if (strcmp(op, "?")==0){
            return 0;
        }
        if(strcmp(op, "+")==0){
            printf("%d\n", a+b);
        } else if(strcmp(op, "-")==0){
            printf("%d\n", a-b);
        } else if(strcmp(op, "*")==0){
            printf("%d\n", a*b);
        } else if(strcmp(op, "/")==0){
            printf("%d\n", a/b);
        }
    } while(strcmp(op, "?"));


    //scanf("%lf", &r);//1 2
    //
    //scanf("%d %d %d", &a, &b, &c);//3 8 1
    //scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);//5 4 2 2 1

    /*処理*/

    /*出力*/

    return 0;
}