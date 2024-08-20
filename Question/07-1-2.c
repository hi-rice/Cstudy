/*
문제 2.
프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을
작성해보자. 예를 들어서 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.
*/

#include <stdio.h>

int main(void) {
    int num = 0, cnt = 0;
    printf("배수의 갯수: ");
    scanf("%d", &num);

    while (cnt++ < num)
        printf("%d ", 3 * cnt);
    return 0;
}
