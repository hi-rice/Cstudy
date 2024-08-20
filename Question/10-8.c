/*
2의 n승을 구하는 함수를 재귀적으로 구현해 보자.
그리고 그에 따른 적절한 main함수도 구현해 보자.
참고로 재귀 함수의 구현이 처음에는 어려운 편이기 때문에 여기서는 쉬운 문제를 제시하였다
(본문에 소개한 예제보다도 쉬운 문제다).
*/

#include<stdio.h>

int jecob(int x) {
    static int y = 1;
    if (x == 0)
        return y;
    y *= 2;
    jecob(x - 1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", jecob(n));
    return 0;
}
