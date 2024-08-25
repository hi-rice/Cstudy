/*
도전 2.
프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 이를 2진수로 변환해서 출력하는
프로그램을 작성해 보자.

실행의 예
10진수 정수 입력: 12
1100
*/

#include <stdio.h>

void DecimalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32]; // 32비트 정수를 담을 수 있는 배열
    int index = 0;

    // 2진수로 변환
    while (num > 0) {
        binary[index] = num % 2; // 현재 비트 저장
        num = num / 2; // 다음 비트를 위해 숫자를 나눔
        index++;
    }

    // 역순으로 출력 (가장 높은 비트부터 출력)
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main(void) {
    int decimal;

    printf("10진수 정수 입력: ");
    scanf("%d", &decimal);

    printf("2진수: ");
    DecimalToBinary(decimal);

    return 0;
}
