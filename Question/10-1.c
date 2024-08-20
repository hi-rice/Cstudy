/*
10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 작성해 보자.
이는 서식 문자의 활용에 대한 문제이므로 쉽게 해결할 수 있을 것이다.
*/

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%X", n);
}
