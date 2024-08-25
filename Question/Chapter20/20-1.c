/*
도전 1.
길이가 4X4인 int형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와 동일하게
초기화하자. 그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 그 결과를 출력하는 프로그램을 작성해 보자.
참고로 배열이 변경되는 형태는 다음과 같다.
*/

#include<stdio.h>

void Turn90do(int (*arr)[4]) {
    int arr2[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr2[j][3 - i] = arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
}

void ShowArray(int (*arr)[4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}


int main(void) {
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int arr2[4][4];

    printf("Before Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("First Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("Second Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("Third Turn\n");
    ShowArray(arr);

    Turn90do(arr);
    printf("Fourth Turn(Again Before Turn)\n");
    ShowArray(arr);

    return 0;
}
