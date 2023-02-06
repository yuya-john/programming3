/*-----------------------------------------------*/
/*-	Finding a Word                      -*/
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

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, n, r=0, H, v=0, x, y[4000];
int count=0;
char W[11], ch[100];

int main(void){
    scanf("%s", W); //printf("%s", W);
    while(1){
        scanf("%s", ch);  /*chを読み取り*/ //printf("%s\n", ch);
        if(strcmp(ch, "END_OF_TEXT")==0)break; /*chがend_of_textならbreakする*/
        for(i=0; i<strlen(ch); i++){
            if(isupper(ch[i])){
                ch[i]+= 32;
            }
        } /*chを小文字にする*/ //printf("%s\n", ch);
        if(strcmp(ch, W)==0)count++; //chとWを比較する。合致したらcount++する。
    }
    printf("%d\n", count); //countの数値を出力。

    return 0;
}