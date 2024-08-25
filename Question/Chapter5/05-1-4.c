/*
문제 4.
프로그램 사용자로부터 아스키 코드 값을 정수의 형태로 입력 받은 후에 해당 정수의 아스키 코드 문자를
출력하는 프로그램을 작성해보자.
예를 들어서 프로그램 사용자가 정수 65를 입력하면 문자 A를 출력해야 한다.
*/

#include <stdio.h>

int main(void) {
    int asc;
    printf("숫자 입력: ");
    scanf("%d", &asc);
    printf("아스키 문자: %c \n", asc);
    return 0;
}
