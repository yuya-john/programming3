/*-----------------------------------------------*/
/*-	at coder - 281:C                            -*/
/*-----------------------------------------------*/

/* ヘッダ読み込み */
#include <stdio.h>
#include <stdlib.h> /*絶対値計算*/

/* メイン関数 */
int main (void) {
    long i, N, T, t=0, j, sum=0, S_N, S_n, answer;
    static int A[1000000000];

    for(i=0; i<1000000000; i++){
        A[i]=0;
    } /*初期化*/

    printf("OK-1\n");

    scanf("%ld %d", &N, &T); /*読み込み*/
    printf("\n%ld %d\n", N, T)

    printf("OK0\n");

    for(i=0; i<N; i++){
        scanf("%d", &A[i+1]);
    } /*読み込み*/

    printf("OK1\n");

    for (i=0; i<N; i++){
        S_N += A[i+1];
    } /*曲の合計時間を計算*/
    printf("S_N : %d\n", S_N); /*確認用*/

    printf("OK2\n");

    t = T % S_N; /*周回で終わる分の時間を削る*/
    printf("t : %d\n", t); /*確認用*/

    printf("OK3\n");

    i=0;

    do {
        i++;
        S_n += A[i];
    } while (S_n<t); /*tの曲番号を算出*/

    answer = t - (S_n-A[i]);

    printf("%ld %d", i, answer);
    printf("OK4\n");
    return 0;

}