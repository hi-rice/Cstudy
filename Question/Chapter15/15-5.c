/*
도전 5.
배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의하자.
(함수의 이름은 DesSort로 정의하자). 그리고 이 함수를 호출하는 예제를 작성해보자.
프로그램의 흐름은 다음과 같이 구성을 하자. 일단 길이가 7인 int형 배열을 선언해서 프로그램 사용자로부터
7개의 정수를 입력 받도록 하자. 그리고 입력 받은 정수를 내림차순으로 정렬하기 위해서,
배열을 인자로 전달하면서 DesSort 함수를 호출하자.
그리고 마지막으로 제대로 정렬이 되었는지 확인하기 위해서 배열의 요소들을 순서대로 출력해보자.

실행의 예
입력 : 1
입력 : 2
입력 : 3
입력 : 4
입력 : 5
입력 : 6
입력 : 7
7 6 5 4 3 2 1
*/

#include <stdio.h>

// 내림차순 정렬 함수
void DesSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // 앞의 요소가 뒤의 요소보다 작다면
                // 두 요소를 교환
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void) {
    int arr[7]; // 길이가 7인 배열 선언

    // 사용자로부터 7개의 정수를 입력받음
    for (int i = 0; i < 7; i++) {
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }

    // 내림차순 정렬 함수 호출
    DesSort(arr, 7);

    // 정렬된 배열 출력
    printf("정렬된 배열: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
