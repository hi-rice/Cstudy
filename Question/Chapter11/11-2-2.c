/*
문제 2.
프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다.
그 다음 배열에 저장된 영단어를 역순으로 뒤집는다. 물론 이 때에 널 문자의 위치를 변경해서는 안 된다.
뒤집고 나서는 제대로 뒤집혀졌는지 확인하기 위해서 출력해보자.
*/

#include <stdio.h>

int main(void) {
    char voca[100];
    int len = 0,



    1;
    char temp;

    printf("영단어 입력: ");
    scanf("%s", voca);

    while (voca[len] != '\0') // 영단어의 길이 계산
        len++;

    for (i = 0; i < len / 2; i++) // 영단어 뒤집기
    {
        temp = voca[i]; // 앞의 문자 임시로 저장
        voca[i] = voca[(len - i) - 1]; // 뒤의 문자를 앞으로
        voca[(len - i) - 1] = temp; // 앞의 문자를 뒤로
    }
    printf("뒤집힌 영단어: %s \n", voca);
    return 0;
}
