/*
문제 1.
프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello World!"를 출력하는
프로그램을 작성해보자.
*/

#include <stdio.h>

int main(void) {
    int num;
    int i = 0;

    printf("양의 정수 입력: ");
    scanf("%d", &num);

    while (i < num) {
        printf("Hello World! \n");
        i++;
    }
    return 0;
}
