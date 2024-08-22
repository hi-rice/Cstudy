/*
문제 2.
다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자.

    A Z
  + Z A
  -------
    9 9

참고로, 가능한 모든 수의 조합을 시도하기 위해서는 반복문을 중첩시켜야 한다.
*/

#include <stdio.h>

int main(void) {
    int A, Z;
    int result;
    for (A = 0; A < 10; A++) {
        for (Z = 0; Z < 10; Z++) {
            if (A == Z)
                continue;
            result = (A * 10 + Z) + (Z * 10 + A);
            if (result == 99)
                printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
        }
    }
    return 0;
}
