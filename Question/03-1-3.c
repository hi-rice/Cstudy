/*
문제 3.

하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자.
예를 들어서 5가 입력되면 25가 출력되어야 한다.
*/

// 문제 3.

#include <stdio.h>

int main(void) {
    int num;
    printf("하나의 정수 입력 : ");
    scanf("%d", &num);
    printf("%d의 제곱의 결과: %d \n", num, num * num);
    return 0;
}
