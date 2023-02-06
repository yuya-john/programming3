/*-----------------------------------------------*/
/*-	Counting Characters                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
//int isupper //int islower //int toupper //int tolower
//'1'-'0' -> 1
//scanf("%c", &ch); 文字の読み込み

int a=0, b=0, c=0, d=0, e, t, i, j, k, l, m, n, r=0, W, H, v=0, x, y[4000];
char string[1300];
char ch;
char ch_;
int sum=0;
int alphabets[30];

int main(void){
    while(scanf("%c", &ch)!=EOF){
        if(isupper(ch)){
            n=ch-'A'; /*n=0でAを表す。*/
            alphabets[n]++;
        } else if(islower(ch)){
            n=ch-'a';
            alphabets[n]++;
        }
    }
    for(ch='a'; ch<='z'; ch++){
        printf("%c : %d\n", ch, alphabets[ch-'a']);
    }


    return 0;
}