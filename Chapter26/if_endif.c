#include <stdio.h>
#define ADD     1
#define MIN     0

int main(void) {
    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %ㅇ", &num1, &num2);

#if ADD     // ADD가 '참'이라면
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if MIN     // MIN이 '참'이라면
    printf("%d - %d = %d \n", num1, num2. num1 - num2);
#endif

    return 0;
}
