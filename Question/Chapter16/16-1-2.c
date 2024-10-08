/*
문제 2.
아래 그림과 관련해서 문제를 제시할 테니, 그림에서 제시하는 배열 A와 배열 B를 유심히 관찰하자.

    1열  2열 3열 4열    -->           1열  2열
1행  1   2   3   4            1행     1    5
2행  5   6   7   8            2행     2    6
    배열 A                     3행    3    7
                              4행    4    8
                                  배열 B
위 그림의 형태대로 배열 A와 배열 B를 선언하자. 그리고 배열 A는 선언과 동시에 그림에서 명시하는 대로
초기화를 진행하자! 그리고 배열 B도 위 그림에서 보이는 대로 초기화를 진행하되,
반드시 배열 A에 저장된 값을 이용해서 초기화를 진행해야 한다.
*/

#include <stdio.h>

int main(void) {
    int arrA[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int arrB[4][2];
    int i, j;

    /* 이   동 */
    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            arrB[j][i] = arrA[i][j];

    /* 출   력 */
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++)
            printf("%2d", arrB[i][j]);
        printf("\n");
    }
    return 0;
}
