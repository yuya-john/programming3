/*-----------------------------------------------*/
/*-	at coder - 271:C                            -*/
/*-----------------------------------------------*/

/*塾性のテスト結果を記録するプログラム*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h> /*絶対値計算*/
#include<time.h>

/*変数宣言*/
int i, j, k, l, m, y, sum, num;
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//long;
//static long;
//char;

/*初期化*/

/*構造体宣言*/
typedef struct { /*構造体*/
    char name[200];
} xxx;

/*関数の宣言*/
int function(void);

/* メイン関数 */
int main (void) {
    /* 入力 */
    int K;
    scanf("%d", &K);

    /* 処理 */
    for(i=0;i<K;i++){
        printf("%c", alphabet[i]);
    }

    /* 出力 */


    /* 終了 */
    return 0;
}

int funtion(void){
    return 0;
}