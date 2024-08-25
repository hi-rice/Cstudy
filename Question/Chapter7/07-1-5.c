/*
문제 5.
프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되
다음 두 가지 조건을 만족시켜야 한다.
"먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력 받는다."
"평균 값은 소수점 이하까지 계산해서 출력한다."
*/

#include <stdio.h>

int main(void) {
    int total = 0, i = 0;
    int num, input;

    printf("입력한 정수의 수는? ");
    scanf("%d", &num);

    while (i++ < num) {
        printf("정수 입력 : ");
        scanf("%d", &input);
        total += input;
    }
    printf("입력의 평균: %f \n", (double) total / num);
    return 0;
}
