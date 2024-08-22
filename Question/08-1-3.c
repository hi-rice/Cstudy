/*
문제 3.
학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하자.
학생의 성적이 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 50점 이상이면 D
그리고 그 미만이면 F다!
프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력 받는다.
그리고는 평균을 구한 다음 그에 적절한 학점을 출력하면 된다.
*/

#include <stdio.h>

int main(void) {
    int kor, eng, math;
    double avr;
    printf("국어, 영어, 수학의 성적 입력: ");
    scanf("%d %d %d", &kor, &eng, &math);
    avr = (kor + eng + math) / 3.0;
    printf("---평균: %f--- \n", avr);

    if (avr >= 90.0)
        printf("A! \n");
    else if (avr >= 80.0)
        printf("B! \n");
    else if (avr >= 70.0)
        printf("C! \n");
    else if (avr >= 50.0)
        printf("D! \n");
    else
        printf("F! \n");

    return 0;
}
