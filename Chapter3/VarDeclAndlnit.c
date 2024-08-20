#include <stdio.h>

int main(void) {
    int num1, num2; // 변수 num1, num2의 선언
    int num3 = 30, num4 = 40; // 변수 num3, num4의 선언 및 초기화

    printf("num1: %d, num2: %d \n", num1, num2);
    num1 = 10; // 변수 num1의 초기화
    num2 = 20; // 변수 num2의 초기화

    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);
    return 0;
}

/*
C언어에서는 변수를 선언과 동시에 초기화 하는 것이 가능하다.
변수를 선언만 하고 초기화하지 않으면 쓰레기 값이 저장된다.
여기서 말하는 쓰레기 값이란 '아무런 의미 없는 값'을 뜻한다.
변수를 선언과 동시에 0으로 초기화한 다음, 이후에 의미 있는 값을 저장하기도 한다.
*/

