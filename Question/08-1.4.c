/*
문제 4.
위의 문제 2를 if~else문을 이용해서 해결하였는가?
어떠한 형태로 해결했건 간에 조건 연산자를 이용하는 형태로 프로그램을 변경해보자.
*/

#include <stdio.h>

int main(void) {
    int num1, num2;
    int result;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    result = (num1 < num2) ? num2 - num1 : num1 - num2;
    printf("뺄셈 결과: %d \n", result);
    return 0;
}
