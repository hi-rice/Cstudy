/*
문제 1.
세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와
가장 작은 수를 반환하는 함수를 정의해보자.
그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
*/

#include <stdio.h>

int MaxNum(int n1, int n2, int n3) {
    if (n1 > n2)
        return (n1 > n3) ? n1 : n3;
    else
        return (n2 > n3) ? n2 : n3;
}

int MinNum(int n1, int n2, int n3) {
    if (n1 < n2)
        return (n1 < n3) ? n1 : n3;
    else
        return (n2 < n3) ? n2 : n3;
}

int main(void) {
    int num1, num2, num3;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 큰 수: %d /n", MaxNum(num1, num2, num3));
    printf("가장 작은 수: %d \n", MinNum(num1, num2, num3));
    return 0;
}
