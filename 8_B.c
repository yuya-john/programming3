/*-----------------------------------------------*/
/*-	Sum of Numbers                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
//int isupper //int islower //int toupper //int tolower

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, n, r=0, W, H, v=0, x, y[4000];
char string[1300];
char ch;
int sum=0;

int main(void){
    while(1){
        sum=0;
        while(1){
            scanf("%c", &ch);
            if(ch=='\n')break;
            n=ch-'0';
            sum+=n;
        }
        if(sum==0)break;
        printf("%d\n", sum);
    }


    return 0;
}