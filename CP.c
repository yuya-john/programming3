/*-----------------------------------------------*/
/*-	at coder - 281:C                            -*/
/*-----------------------------------------------*/

/* ヘッダ読み込み */
#include <stdio.h>
#include <stdlib.h> /*絶対値計算*/

/* メイン関数 */
int main (void) {
    long i=0, N=0, T=0, t=0, j=0, sum=0, S_N=0, S_n=0, answer=0;
    static long A[1000000000];
    printf("変数設定ここまで\n");

    /* 入力 */
    printf("変数入力：");
    scanf("%ld %ld", &N, &T);
    printf("変数確認：%ld %ld\n", N, T);
    printf("変数入力ここまで\n");

    for(i=0; i<N; i++){
        A[i+1]=0;
    } /*初期化*/

    printf("数値：");
    for(i=0; i<N; i++){
        scanf("%ld", &A[i+1]);

    /* 処理 */
    for (i=0; i<N; i++){
        S_N += A[i+1];
    } /*曲の合計時間を計算*/

    t = T % S_N; /*周回で終わる分の時間を削る*/

    for (i=1; S_n<t; i++){
        S_n += A[i];
    }
    i--; /*tの曲番号を算出*/

    answer = t - (S_n-A[i]);

    /* 出力 */
    printf("answer : %ld\n", answer); /*確認用*/

    /* 終了 */
    return 0;
}