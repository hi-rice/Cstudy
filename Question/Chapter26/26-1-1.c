/*
문제 1.
세 개의 정수를 인자로 받아서 이 세 정수의 덧셈결과와 곱셈결과를 반환하는 매크로 함수를 각각 정의해보자.
*/

#include <stdio.h>
#define SUM(X, Y, Z)  ((X) + (Y) + (Z))
#define MULTIPLY(X, Y, Z)  ((X) * (Y) * (Z))

int main(void) {
    int a = 3, b = 4, c = 5;
    printf("세 정수의 합: %d \n", SUM(a, b, c));
    printf("세 정수의 곱: %d \n", MULTIPLY(a, b, c));
    return 0;
}
