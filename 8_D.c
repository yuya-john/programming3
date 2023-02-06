/*-----------------------------------------------*/
/*-	Ring                      -*/
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

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, n, r=0, W, H, v=0, x, y[4000];
char string[1300];
char ch;
int n_s, n_p;
char s[101], p[101], ss[202];

int main(void){
    scanf("%s %s", s, p);/*スキャン*/
    n_s=strlen(s);
    n_p=strlen(p); //printf("%d %d\n", n_s, n_p);/*文字列の長さを取得*/
    strcpy(ss, s); //printf("%s\n", ss);
    strcat(s, ss); //printf("%s\n", s);/*n_sをつなげる*/
    if(strstr(s, p)==NULL)printf("No\n"); /*文字列を比較*/
    else printf("Yes\n");

    return 0;
}