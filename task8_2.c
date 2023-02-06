/*塾性のテスト結果を記録するプログラム*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h> /*絶対値計算*/
#include<time.h>

int i, j, k, l, m, y, sum, num;


char date[64];
time_t t;

/*構造体の宣言*/
typedef struct { /*構造体*/
    char name[200]; /*生徒フルネーム*/
    int schYear; /*高校何年生か*//*3学年、テスト最大6回*/
    int mathA[4][15];/*数学A*/
    int mathB[4][15]; /*数学B*/
    int comE[4][15]; /*コミュニケーション英語*/
    int exE[4][15]; /*英語表現*/
} student;

/*関数の宣言*/
void start(void);
int showmenu(void);
int showlist(void);
int reset(void);
int enroll(void);
int input(void);
int output(void);
int correct(void);
int update(void);
int studentlist(void);
int analysis(void);
int end(void);
int Average(int average, int i, int j, int k);
int Expected(int expected, int i, int j, int k);
student seito[11];

/*起動する関数*/
void start(void){
    int a=0;
    char n[100], n2[5]="start";
    printf("*--- start と入力して開始 ---*\n");
    scanf("%s", n);
    if(strcmp(n,n2)==0){
        printf("\n...\n\n*--- 起動完了 ---*\n\n");
        printf("*--- | 0 -> はじめから | 1 -> 続きから | ---*\n");
        scanf("%d", &a);
        if(a==0){
            reset();
        } else if(a==1){
            FILE *file;
            file = fopen("task8_2_data.dat", "r");
                //i=0, j=0;
                //fscanf(file, "%d", &i);
                for(k=1; k<=10; k++){
                    fscanf(file, "%d %s %d", &i, seito[k].name, &seito[k].schYear);
                }

            /*ここから*/
            for(i=1; i<=10; i++){
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fscanf(file, "%d", &seito[i].mathA[j][k]);
                }
                for(k=1; k<=3; k++){
                    fscanf(file, "%d", &seito[i].mathA[j][k]);
                }
            }
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fscanf(file, "%d", &seito[i].mathB[j][k]);
                }
                for(k=1; k<=3; k++){
                    fscanf(file, "%d", &seito[i].mathB[j][k]);
                }
            }
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fscanf(file, "%d", &seito[i].comE[j][k]);
                }
                for(k=1; k<=3; k++){
                    fscanf(file, "%d", &seito[i].comE[j][k]);
                }
            }
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fscanf(file, "%d", &seito[i].exE[j][k]);
                }
                for(k=1; k<=3; k++){
                    fscanf(file, "%d", &seito[i].exE[j][k]);
                }
            }
            /*ここまで*/
        fclose(file);
        }
        return;
        }
    return;
    } else {
        printf("*--- コードが違います ---*\n");
        exit(0);
        }
}

int showmenu(){
    int n=0;
    printf("---- メニュー一覧 ----\n");
    printf("1.生徒名の登録\n2.テスト月と、点数の入力\n3.生徒の点数の出力\n4.点数の修正（未実装）\n5.学年の更新\n6.生徒名簿を表示\n7.テストの分析\n10.終了\n");
    printf("----------------------\n");
    do{
        printf("*--- メニュー番号を入力して開始 ---*\n");
        scanf("%d", &n);
    } while ((n<1 || 7<n) && n!=10);
    switch(n){
        case 1: enroll();break;
        case 2: input();break;
        case 3: output();break;
        case 4: correct();break;
        case 5: update();break;
        case 6: studentlist();break;
        case 7: analysis();break;
        case 8: printf("未登録\n");break;
        case 9: printf("未登録\n");break;
        case 10: end();break;
    }
    return 0;
}

int showlist(){
    printf("---- 生徒一覧 ----\n");
    for(i=1; i<=10; i=i+2){
        printf("生徒%d：%s %d年生   ", i, seito[i].name, seito[i].schYear);
        printf("生徒%d：%s %d年生\n", i+1, seito[i+1].name, seito[i+1].schYear);
    }
    return 0;
}

int showscore(int i, int m){
    y = seito[i].schYear;
    printf("---- %sさん　今回のテスト結果 ----\n", seito[i].name);
    printf("数学A：%d　数学B：%d　コミュ英：%d　英表：%d\n----------------------------\n", seito[i].mathA[y][m], seito[i].mathB[y][m], seito[i].comE[y][m], seito[i].exE[y][m]);
    return 0;
}

int showscoreS(int k){
    y = seito[i].schYear;
    printf("---- %sさん　いままでのテスト結果 ----\n", seito[i].name);
    for(i=1; i<=y; i++){
        printf("---- %d年生 ----\n", i);
        for(j=4; j<=12; j++){
            printf("%d月  数学A：%d　数学B：%d　コミュ英：%d　英表：%d\n", j, seito[k].mathA[i][j], seito[k].mathB[i][j], seito[k].comE[i][j], seito[k].exE[i][j]);
        }
        for(j=1; j<=3; j++){
            printf("%d月  数学A：%d　数学B：%d　コミュ英：%d　英表：%d\n", j, seito[k].mathA[i][j], seito[k].mathB[i][j], seito[k].comE[i][j], seito[k].exE[i][j]);
        }
    }
    printf("---- 出力完了 ----\n");
    return 0;
}

int reset(){
    char mitouroku[100]="null";
    for(i=1; i<=10; i++){
        strcpy(seito[i].name, mitouroku);
    }
    for(i=1; i<=10; i++){
        for(j=1; j<=3; j++){
            for(k=1; k<=12; k++){
                seito[i].exE[j][k]=0;
            }
        }
    }
    seito[9].exE[3][11]=0;
    return 0;
}

int enroll_sub(void){
    printf("*--- 何番に登録しますか？ ---*\n");
    scanf("%d", &i);
    printf("%d番ですね。\nはじめに、名前を入力してください：", i);
    scanf("%s", seito[i].name);
    printf("---次に学年を入力してください：");
    scanf("%d", &seito[i].schYear);
    printf("---入力完了\n");
    showlist();
    return 0;
}

int enroll(void){ /*1. 生徒名の登録 */
    showlist();
    enroll_sub();
    printf("*--- 1->さらに登録 | 2->メニューに戻る ---*\n");
    scanf("%d", &i);
    while (i==1)
    {
        enroll_sub();
        printf("*--- 1->さらに登録 | 2->メニューに戻る ---*\n");
        scanf("%d", &i);
    }
    printf("*--- メニューに戻ります ---*\n");
    showmenu();
    return 0;
};

int input(void){
    int m;
    showlist();
    printf("テスト結果を登録します。\n生徒番号を指定してください。\n生徒番号：");
    scanf("%d", &i);
    printf("*--- 何月のテストですか？ ---*\n月：");
    scanf("%d", &m);
    printf("数学A、数学B、コミュ英、英表 の順で点数を入力してください\n点数：");
    scanf("%d %d %d %d", &seito[i].mathA[seito[i].schYear][m], &seito[i].mathB[seito[i].schYear][m], &seito[i].comE[seito[i].schYear][m], &seito[i].exE[seito[i].schYear][m]);
    showscore(i, m);
    showmenu();
    return 0;
};

int output(void){
    showlist();
    printf("点数を出力します。\n生徒番号を指定してください。\n生徒番号：");
    scanf("%d", &i);
    showscoreS(i);
    showmenu();
    return 0;
};

int correct(void){
    printf("*--- この機能は未完成です ---*\n");
    showmenu();
    return 0;
};

int update(void) {
    printf("*--- 学年を更新しますか？  0->No  1->Yes ---*\n");
    scanf("%d", &i);
    if(i==1){
        printf("*--- 本当に更新しますか？  0->No  1->Yes ---*\n");
        scanf("%d", &i);
        if(i==1){
            for(j=1; j<=10; j++){
                if(seito[j].schYear==1 || seito[j].schYear==2){
                    seito[j].schYear++;
                } else if (seito[j].schYear==3){
                    seito[j].schYear=0;
                }
            }
        }
        printf("*--- 更新できました。 ---*\n");
    }
    showmenu();
    return 0;
}

int studentlist(void){
    printf("*--- 生徒名簿を表示します。 ---*\n");
    showlist();
    showmenu();
    return 0;
}

int Average(int average, int i, int j, int k){
    char sub[50];
    int n=0;
    k=0;
    /*
    switch(j){
        case 0: strcpy(sub, "数学A");break;
        case 1: strcpy(sub, "数学B");break;
        case 2: strcpy(sub, "コミュ英");break;
        case 3: strcpy(sub, "英表");break;
    }*/
    sum=0;
    for(l=1; l<seito[i].schYear; i++){
        for(m=1; m<=12; m++){
            sum += seito[i].mathA[l][m];
            n++;
        }
    }
    if(4<=k&&k<=12){
        for(m=4; m<=k; m++){
            sum += seito[i].mathA[seito[i].schYear][m];
            n++;
        }
    } else {
        for(m=4; m<=12; m++){
            sum += seito[i].mathA[seito[i].schYear][m];
            n++;
        }
        for(m=1; m<=k; m++){
            sum += seito[i].mathA[seito[i].schYear][m];
            n++;
        }
    }
    average=(sum/n);
    return average;
}

int Expected(int expected, int i, int j, int k){
    sum=0;
    return 0;
}

int analysis(void){
    printf("生徒番号を指定してください。\n生徒番号：");
    scanf("%d", &i);
    printf("科目を指定してください。0 ->数学A | 1 -> 数学B | 2 -> コミュ英 | 3 -> 英表 \n0がおすすめ。科目：");
    char subject[50];
    scanf("%d", &j);

    switch(j){
        case 0: strcpy(subject, "数学A");break;
        case 1: strcpy(subject, "数学B");break;
        case 2: strcpy(subject, "コミュ英");break;
        case 3: strcpy(subject, "英表");break;
    }
    printf("現在の月を指定してください。\n月：");
    scanf("%d", &k);
    int average=0, expected=0;
    average = Average(average, i, j, k);
    expected = Expected(expected, i, j, k);
    printf("----------------------\n");
    printf("->%sさんの%s分析結果\n", seito[i].name, subject);
    printf("平均値：%d\n", average);
    printf("一年後の予想値：%d\n", expected);
    printf("----------------------\n");

    showmenu();
    return 0;
}

int saveList(void){
    return 0;
}

int end(void){
    FILE *file;
    file = fopen("task8_2_result.dat", "a");
        /*時刻表示*/
        //char date[64];
        t = time(NULL);
        strftime(date, sizeof(date), "%Y/%m/%d %a %H:%M:%S", localtime(&t));
        fprintf(file, "%s\n", date);
        /*名簿表示*/
        fprintf(file, "---- 生徒一覧 ----\n");
        for(i=1; i<=10; i=i+2){
            fprintf(file, "生徒%d：%s %d年生   ", i, seito[i].name, seito[i].schYear);
            fprintf(file, "生徒%d：%s %d年生\n", i+1, seito[i+1].name, seito[i+1].schYear);
        }
        fprintf(file, "\n");
        /*終了*/
    fclose(file);

    file = fopen("task8_2_data.dat", "w");
        /*名簿表示*/
        for(i=1; i<=10; i++){
            fprintf(file, "%d %s %d\n", i, seito[i].name, seito[i].schYear);
        }
        for(i=1; i<=10; i++){
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fprintf(file, "%d ", seito[i].mathA[j][k]);
                }
                for(k=1; k<=3; k++){
                    fprintf(file, "%d ", seito[i].mathA[j][k]);
                }
            }
            fprintf(file, "\n");
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fprintf(file, "%d ", seito[i].mathB[j][k]);
                }
                for(k=1; k<=3; k++){
                    fprintf(file, "%d ", seito[i].mathB[j][k]);
                }
            }
            fprintf(file, "\n");
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fprintf(file, "%d ", seito[i].comE[j][k]);
                }
                for(k=1; k<=3; k++){
                    fprintf(file, "%d ", seito[i].comE[j][k]);
                }
            }
            fprintf(file, "\n");
            for(j=1; j<=3 ;j++){
                for(k=4; k<=12; k++){
                    fprintf(file, "%d ", seito[i].exE[j][k]);
                }
                for(k=1; k<=3; k++){
                    fprintf(file, "%d ", seito[i].exE[j][k]);
                }
            }
            fprintf(file, "\n");
        }

        //fprintf(file, "/*---- 生徒一覧 ----\n*/");
        //fprintf(file, "\n");

        /*時刻表示*/

        //char date[64];
        t = time(NULL);

        strftime(date, sizeof(date), "%Y/%m/%d %a %H:%M:%S", localtime(&t));
        fprintf(file, "%s\n", date);
        /*終了*/
    fclose(file);
    printf("結果を保存しました。\n");
    return 0;
};



/*メイン関数*/
int main(void){
    start(); /*start入力させると次ステップへ*/
    showmenu(); /*機能入力を受付⇒各機能に飛ばす*/

    printf("*--- 終了します ---*\n");
    return 0;
}