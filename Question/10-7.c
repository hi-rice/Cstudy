/*
프로그램 사용자로부터 숫자 n을 입력받는다.
그러고 나서 다음 공식이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해 보자.
*/

#include<stdio.h>

int main(void) {
    int n, k = 0, g = 1;
    printf("정수입력");
    scanf("%d", &n);
    while (1) {
        g *= 2;
        if (g > n)
            break;
        k++;
    }
    printf("%d", k);
}

/*
#include <stdio.h>

int main(void) {
    int n, k = 0, g = 1;
    printf("정수 입력: ");
    scanf("%d", &n);

    while (g <= n) {
        g *= 2;
        k++;
    }
    k--; // 루프에서 벗어나기 전의 k 값이 조건을 만족하는 최대 k입니다.

    printf("공식이 성립하는 k의 최댓값: %d\n", k);
    return 0;
}
*/
