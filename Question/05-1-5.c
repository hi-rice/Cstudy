/*
문제 5.
프로그램 사용자로부터 알파벳 문자 하나를 입력 받는다. 그리고 이에 해당하는 아스키 코드 값을
출력하는 프로그램을 작성해보자. 예를 들어서 프로그램 사용자가 문자 A를 입력하면 정수 65를 출력해야 한다.
*/

#include <stdio.h>

int main(void) {
    char ch;
    printf("아스키 문자 입력: ");
    scanf("%c", &ch);
    printf("아스키 코드 값: %d \n", ch);
    return 0;
}
