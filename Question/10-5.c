/*
10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자.
참고로 정수 num이 1과 num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다.
따라서 3은 소수이다. 그러나 4는 소수가 아니다. 1, 2, 4로 나눠지기 때문이다.
*/

#include <stdio.h>

int main(void) {
    int n = 0;
    for (int i = 0; i < 10; i++) {
        n++;
        while (1) {
            int count = 0;
            for (int z = 1; z <= n; z++) {
                if (n % z == 0)
                    count++;
            }
            if (count == 2) {
                printf("%d ", n);
                break;
            } else
                n++;
        }
    }
}
