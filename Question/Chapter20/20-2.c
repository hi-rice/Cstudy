/*
도전 2.
달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다.
여기서 말하는 달팽이 배열은 다음과 같다.
위 그림에서는 4X4의 달팽이 배열과 5X5의 달팽이 배열을 보여주고 있다.
이 내용을 참조하여 프로그램 사용자로부터 하나의 숫자 n을 입력 받아서 nXn의 길이에 해당하는
달팽이 배열을 출력해주는 프로그램을 작성해보자.

실행의 예
숫자를 입력하시오 : 5
1   2   3   4   5
16  17  18  19  6
15  24  25  20  7
14  23  22  21  8
13  12  11  10  9
*/

#include<stdio.h>

int arr[100][100];
int count = 1;

void Left_to_Right(int row, int min, int max) {
    for (int i = min; i < max; i++) {
        arr[row][i] = count;
        count++;
    }
}

void Right_to_Left(int row, int max, int min) {
    for (int i = max - 2; i >= min; i--) {
        arr[row][i] = count;
        count++;
    }
}

void Top_to_Bottom(int col, int min, int max) {
    for (int i = min + 1; i < max; i++) {
        arr[i][col] = count;
        count++;
    }
}

void Bottom_to_Top(int col, int max, int min) {
    for (int i = max - 2; i >= min + 1; i--) {
        arr[i][col] = count;
        count++;
    }
}

void Snail(int n) {
    int min = 0;
    int max = n;

    for (int i = 0; i < n / 2; i++) {
        Left_to_Right(i, min, max);
        Top_to_Bottom(n - 1 - i, min, max);
        Right_to_Left(n - 1 - i, max, min);
        Bottom_to_Top(i, max, min);
        min++;
        max--;
    }

    if (n % 2 == 1) {
        arr[n / 2][n / 2] = count;
    }
}


int main(void) {
    int n;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);

    Snail(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
