/*-----------------------------------------------*/
/*-	How many ways?                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int a=0, b=0, c=0, d=0, e, t, i, j, k, n, W, H, v=0, x, y[4000], devisor=0, max= -1000000, min=1000000;
//double area=0, circumference=0, r=0;
int sum=0;
int way=0;
int m[60], f[60], r[60];
char suit[60][5];
int rank[60];
char suit_missing[10];
int sort[5][15];
int building[5][4][11];


int main(void){
    /*入力*/
    while(1){
        scanf("%d %d", &n, &x); //a+b+c=x //1<=a,b,c<=n
        for(i=1; i<=n; i++){
            for(j=2; j<=n; j++){
                for(k=3; k<=n; k++){
                    sum=i+j+k;
                    if(sum==x && i<j && j<k){
                        way++;
                        //printf("%d %d %d\n", i, j, k);
                        //printf("%d\n", way);
                    }
                }
            }
        }
        if(n==0 && x==0)break;
        printf("%d\n", way);
        way=0;
    }

    return 0;
    }
