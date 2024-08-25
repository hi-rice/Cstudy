/*
문제 2.
다음의 출력결과를 보이도록 예제를 작성해보자.
이번에도 역시 출력되는 숫자들은 서식문자 %d를 이용해서 출력하도록 하자.

4X5=20
7X9=63
*/

//문제 2.

#include <stdio.h>

int main(void) {
    printf("%dX%d=%d \n", 4, 5, 20);
    printf("%dX%d=%d \n", 7, 9, 7 * 9);
    return 0;
}
