/*-----------------------------------------------*/
/*-	Card Game                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
//int isupper //int islower //int toupper //int tolower
//'1'-'0' -> 1; 数字を文字に変換する　//scanf("%c", &ch); 文字の読み込み　//strren 文字列の長さ測定
//char strstr(s1, s2) /*s1から文字列s2を探す。見つかったらその位置のアドレスを返す。*/
//char strcat(s1, s2) /*s1とs2を連結する。*/
//while(1){};->使いやすい。
/*char strncpy(コピー先の文字列変数ポインタ, コピー開始位置を示すポインタ, 開始位置から何文字抽出するかを示す整数)*/
//複雑なときは紙に書こう //変数はいろいろ作ると考えやすい？

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, r=0, H, v=0, x, y[4000];

int main(void){
    /*変数*/
    int n=0, win, taro=0, hanako=0, short_length=0, shorter=0, word_taro_length, word_hanako_length;
    char word_taro[101], word_hanako[101];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        /*入力*/
        scanf("%s %s", word_taro, word_hanako);
        /*処理1*/
        word_taro_length=strlen(word_taro);
        word_hanako_length=strlen(word_hanako);
        if(word_taro_length==word_hanako_length){
            short_length=word_taro_length;
            shorter=0;
        } else if(word_taro_length<word_hanako_length){
            short_length=word_taro_length;
            shorter=1;
        } else if(word_taro_length>word_hanako_length){
            short_length=word_hanako_length;
            shorter=2;
        }
        /*処理2*/
        for(j=0; j<short_length; j++){
            if(word_taro[j]>word_hanako[j]){
                taro+=3; break;
            } else if(word_taro[j]<word_hanako[j]){
                hanako+=3; break;
            }
        }
        if(short_length==j){
            if(shorter==0){
                taro++; hanako++;
            } else if(shorter==1){
                hanako+=3;
            } else if(shorter==2){
                taro+=3;
            }
        }
    }
    printf("%d %d\n", taro, hanako);
    return 0;
}