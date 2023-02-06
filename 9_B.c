/*-----------------------------------------------*/
/*-	Shuffle                      -*/
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

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, n, r=0, H, v=0, x, y[4000];

int main(void){
    char deck[2000], deck_cpy[2000];
    int deck_len, subtract, up, down;
    while(1){
        /*入力*/
        scanf("%s", deck);{ /*aabc*/
            strcpy(deck_cpy, deck);
            deck_len=strlen(deck);
        }
        if(strcmp(deck, "-")==0) break;
        /*シャッフル枚数読み込みと処理*/
        scanf("%d", &subtract); /*3枚*/
        for(int times=1; times<=subtract; times++){
            //printf("times:%d\n", times);
            scanf("%d", &up);{
                down=deck_len-up;
            }
            for(i=up; i<=deck_len-1; i++){
                deck[i-up]=deck_cpy[i];
            }
            //printf("%s\n", deck);
            for(j=0; j<=up-1; j++){
                deck[j+down]=deck_cpy[j];
            }
            //printf("%s\n", deck);
            strcpy(deck_cpy, deck);
        }
        printf("%s\n", deck);
    }

    return 0;
}