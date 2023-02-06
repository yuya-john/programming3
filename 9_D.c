/*-----------------------------------------------*/
/*-	Transformation                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>//char strstr(s1, s2) /*s1から文字列s2を探す。見つかったらその位置のアドレスを返す。*/ //char strcat(s1, s2) /*s1とs2を連結する。*/ /*char strncpy(コピー先の文字列変数ポインタ, コピー開始位置を示すポインタ, 開始位置から何文字抽出するかを示す整数)*/
#include<stdlib.h>
#include<time.h>
#include<math.h> //double pow(double, double) ->底、指数の順 //double sqrt(double x); -> ルートの計算
#include<ctype.h>//int isupper //int islower //int toupper //int tolower
//'1'-'0' -> 1; 数字を文字に変換する　//scanf("%c", &ch); 文字の読み込み　//strlen 文字列の長さ測定
//while(1){};->使いやすい。
//複雑なときは紙に書こう //変数はいろいろ作ると考えやすい？

int i, j, k;
char str[1001], p[1001], temp[1001], command[20];
int q, a, b;
/*関数*/
int replace(int a, int b){
    scanf("%s", p);
    for(i=0; i<=b-a; i++){
        str[a+i]=p[0+i];
    }
    return 0;
}

int reverse(int a, int b){
    strcpy(temp, str);
    for(i=0; i<=b-a; i++){
        str[a+i]=temp[b-i];
    }
    return 0;
}

int print(int a, int b){
    for(i=a; i<=b; i++){
        printf("%c", str[i]);
        if(i==b){
            printf("\n");
        }
    }
    return 0;
}

int main(void){
    /*変数*/

    /*入力*/
    scanf("%s", str);
    scanf("%d", &q);
    for(j=0; j<q; j++){
        scanf("%s", command);
        scanf("%d %d", &a, &b);
        if(strcmp(command, "replace")==0){
            replace(a, b);
        } else if(strcmp(command, "reverse")==0){
            reverse(a, b);
        } else if(strcmp(command, "print")==0){
            print(a, b);
        }
    }
    return 0;
}