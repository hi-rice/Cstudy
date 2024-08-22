/*
문제 3.
while문의 중첩관련 예제 TwoToNine.c를 do~while문의 중첩기반으로 재 구현해 보자.
do~while문의 중첩에 대해서는 별도의 언급이 없었지만, while문의 중첩을 이해하였으니,
충분이 응용이 가능하다.
*/

#include <stdio.h>

int main(void) {
    int cur = 2;
    int is = 0;

    do {
        is = 1;
        do {
            printf("%dx%d=%d \n", cur, is, cur * is);
            is++;
        } while (is < 10);
        cur++;
        printf("\n");
    } while (cur < 10);
    return 0;
}
