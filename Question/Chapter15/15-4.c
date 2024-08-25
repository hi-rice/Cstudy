/*
도전 4.
회문(Palindrome)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다.
예를 들어서 level, bob과 같은 단어들은 회문에 속한다. 이에 우리는 인자로 전달되는 영단어가
회문인지 아닌지를 판단해서 그 결과를 출력하는 기능의 함수를 정의하고 이에 적절한 main 함수를 정의해
보고자 한다. 단 구현의 편의를 위해서 대소문자까지 일치해야 회문으로 인정하기로 하겠다
(이는 어디까지나 구현의 편의를 고려한 제약사항일 뿐이다.)

실행의 예
문자열 입력 : noon
회문입니다.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 회문인지 판단하는 함수
bool IsPalindrome(const char *str) {
    int len = strlen(str); // 문자열의 길이
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            // 앞뒤 문자가 다르면 회문이 아님
            return false;
        }
    }
    return true; // 앞뒤 문자가 모두 같으면 회문
}

int main(void) {
    char word[100]; // 입력받을 문자열 저장을 위한 배열 선언

    printf("문자열 입력 : ");
    scanf("%s", word); // 문자열 입력

    if (IsPalindrome(word)) {
        printf("회문입니다.\n");
    } else {
        printf("회문이 아닙니다.\n");
    }

    return 0;
}
