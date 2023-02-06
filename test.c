#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str1[1000];
    char str2[1000];
    printf("数字1：");
    fgets(str1, sizeof(str1), stdin);
    printf("数字2：");
    fgets(str2, sizeof(str2), stdin);

    int num1, num2;
    sscanf(str1, "%d", &num1);
    sscanf(str2, "%d", &num2);
    printf("%d\n", 500-num1-num2);
    return 0;
}