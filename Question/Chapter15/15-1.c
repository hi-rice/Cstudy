/*
도전 1.
길이가 10인 배열을 선언하고 총 10개의 정수를 ㅇ비력 받아서, 홀수와 짝수를 구분 지어 출력하는
프로그램을 작성해 보자. 일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자. 간, 10개의 정수는
main 함수 내에서 입력 받도록 하고, 배열 내에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는
짝수만 출력하는 함수를 각각 정의해서 이 두 함수를 호출하는 방식으로 프로그램을 완성하자.

실행의 예
총 10개의 숫자 입력
입력 : 1
입력 : 2
입력 : 3
입력 : 4
입력 : 5
입력 : 6
입력 : 7
입력 : 8
입력 : 9
입력 : 0
홀수 출력 : 1, 3, 5, 7, 9
짝수 출력 : 2, 4, 6, 8, 0
*/

#include <stdio.h>

// 배열 내의 홀수를 출력하는 함수
void PrintOddNumbers(int arr[], int size) {
    printf("홀수 출력: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            // 홀수인지 확인
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// 배열 내의 짝수를 출력하는 함수
void PrintEvenNumbers(int arr[], int size) {
    printf("짝수 출력: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            // 짝수인지 확인
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main(void) {
    int numbers[10];

    printf("총 10개의 숫자 입력\n");
    for (int i = 0; i < 10; i++) {
        printf("입력: ");
        scanf("%d", &numbers[i]);
    }

    PrintOddNumbers(numbers, 10); // 홀수 출력 함수 호출
    PrintEvenNumbers(numbers, 10); // 짝수 출력 함수 호출

    return 0;
}
