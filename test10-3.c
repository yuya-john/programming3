#include<stdio.h>
int main(void){
    int tensuu=-1;
    do {
        printf("点数：" );
        scanf("%d", &tensuu);
    } while(tensuu<0 || 100<tensuu);
    printf("%d点です\n", tensuu);
}