/*
문제 1.
프로그램 사용자로부터 문자열을 입력 받아서 입력 받은 문자열의 단어를 역으로 출력하는 프로그램을 작성해보자.
예를 들어서 "I am a boy"가 입력되면, 다음의 출력을 보여야 한다.
    "boy a am I"
단! 문자열의 입력에 앞서 프로그램 사용자가 입력할 문자열의 최대길이 정보를 먼저 입력 받기로 하자.
그리고 그 길이만큼 메모리 공간을 동적으로 할당해서 문자열을 입력 받기로 하자.
참고로 이 문제에서는 메모리의 동적 할당 이외에 문자열의 단어를 역으로 출력하라는 비교적 어려운 주제를 여러분에게
제시하고 있다. 이 문제를 해결하는 방법은 여러 가지이다.
따라서 여유를 가지고 여러분 나름의 방법을 찾아서 구현해보기 바란다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int length;
    char *str;
    printf("입력할 문자열의 최대 길이를 입력하세요: ");
    scanf("%d", &length);
    str = (char *) malloc(length + 1);
    if (str == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("문자열을 입력하세요: ");
    getchar();
    fgets(str, length + 1, stdin);
    str[strcspn(str, "\n")] = '\0';

    char *words[100];
    int word_count = 0;
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[word_count++] = token;
        token = strtok(NULL, " ");
    }
    printf("단어를 역순으로 출력: ");
    for (int i = word_count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");
    free(str);
    return 0;
}
