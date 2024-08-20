/*
프로그램 사용자로부터 초(second)를 입력받은 후에,
이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해 보자.
*/

#include<stdio.h>

int main(void) {
    int cho, hour, minute, second;
    printf("초를 입력하세요.");
    scanf("%d", &cho);
    second = cho % 60;
    hour = cho / 3600;
    minute = (cho - 3600 * hour) / 60;
    printf("%d시간 %d분 %d초입니다.", hour, minute, second);
    return 0;
}
