/*-----------------------------------------------*/
/*-	Finding Missing Cards                      -*/
/*-----------------------------------------------*/

/*
Print the missing cards. The same as the input format,
 each card should be printed with a character and an integer separated-
 by a space character in a line.
  Arrange the missing cards in the following priorities:

Print cards of spades, hearts, clubs and diamonds in this order.
If the suits are equal, print cards with lower ranks first
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
    int b, c, d=0, t, i, j, n, W, H, x[100000], y[4000], devisor=0, max= -1000000, min=1000000;
    //double area=0, circumference=0, r=0;
    char suit[60][5];
    int rank[60];
    char suit_missing[10];
    int sort[5][15];
    //int *N;
    //long sum=0;
    //double f=0;

    //SHCD //1-13
    /*入力*/
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%s %d", suit[i], &rank[i]);
        if(strcmp(suit[i],"S")==0){
            sort[1][rank[i]]=1;
        } else if(strcmp(suit[i],"H")==0){
            sort[2][rank[i]]=1;
        } else if(strcmp(suit[i],"C")==0){
            sort[3][rank[i]]=1;
        } else if(strcmp(suit[i],"D")==0){
            sort[4][rank[i]]=1;
        }
    } /*読み込み終了*/





    for(i=1; i<=4; i++){
        for(j=1; j<=13; j++){
            if(sort[i][j]==0){
                switch(i){
                case 1:strcpy(suit_missing, "S");break;
                case 2:strcpy(suit_missing, "H");break;
                case 3:strcpy(suit_missing, "C");break;
                case 4:strcpy(suit_missing, "D");break;
                }
                printf("%s %d\n", suit_missing, j);
            }
        }
    }


    /*ここから*/
    return 0;
    }

/*模範解答
S 1
S 2
H 3
H 4
H 5
H 6
H 7
H 8
H 13
C 1
C 9
C 10
D 2
D 3
D 4
D 13
*/

/*自分の出力
S 1
S 2
H 3
H 4
H 5
H 6
H 7
H 8
H 13
C 1
C 9
C 10
D 2
D 3
D 4
D 13
*/