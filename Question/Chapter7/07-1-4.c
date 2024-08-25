/*
문제 4.
프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되,
역순으로 출력하는 프로그램을 작성해보자.
*/

#include <stdio.h>

int main(void) {
    int num;
    int i = 9;

    printf("역순으로 출력할 단 입력 : ");
    scanf("%d", &num);

    while (i > 0) {
        printf("%dx%d=%d \n", num, i, num * i);
    }
    return 0;
}
