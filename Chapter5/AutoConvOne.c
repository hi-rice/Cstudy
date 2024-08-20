#include <stdio.h>

int main(void) {
    double num1 = 245;
    int num2 = (int) 3.1415; // 명시적으로 double을 int로 형변환
    int num3 = 129;
    char ch = (char) num3; // 명시적으로 int를 char로 형변환

    printf("정수245를 실수로: %f \n", num1);
    printf("실수 3.1415를 정수로: %d \n", num2);
    printf("큰 정수 129를 작은 정수로: %d \n", ch);
    return 0;
}
