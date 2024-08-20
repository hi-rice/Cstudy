/*
두 개의 정수를 입력받아서 최대 공약수(GCD)를 구하는 프로그램을 작성해 보자.
*/

#include <stdio.h>

int main(void) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    for (int i = n1; i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
