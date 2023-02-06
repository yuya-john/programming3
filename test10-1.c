#include<stdio.h>
int main(void) {
int month=1;
int money=1;

while(money<1000000){
    printf("%2d月目：%7d円\n", month, money);
    money *= 2;
    month++;
}
printf("A：%d月目に%d円となる。", month, money);

    return 0;
}