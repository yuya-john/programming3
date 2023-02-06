#include <stdio.h>
#include <stdlib.h>/*絶対値計算*/

int main (void) {
    static int N=0, T=0, A[1000000000], i, j, sum=0;
    for(i=0; i<N; i++){
        A[i]=0;
    }/*初期化*/

    scanf("%d %d", &N, &T);/*読み込み*/

    for(i=0; i<N; i++){
        scanf("%d", &A[i+1]);
    }/*読み込み*/



    return 0;
}