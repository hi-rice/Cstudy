/*
문제 2.
섭씨(Celsius) 온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah 라는 이름의 함수와
그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel 라는 이름의 함수를 정의하고
이 두 함수를 호출하는 예제를 완성해보자.
참고로 섭씨와 화씨간 온도변환의 공식은 다음과 같다.

Fah=1.8XCel+32
*/

#include <stdio.h>

double CelToFah(double c) // 섭씨를 화씨로
{
    return 1.8 * c + 32;
}

double FahToCel(double f) // 화씨를 섭씨로
{
    return (f - 32) / 1.8;
}

int main(void) {
    int sel;
    double num;
    printf("1.섭씨를 화씨로 2.화씨를 섭씨로 \n");
    printf("선택>>");
    scanf("%d", &sel);

    if (sel == 1) {
        printf("섭씨 입력 : ");
        scanf("%1f", &num);
        printf("변환된 화씨: %f \n", CelToFah(num));
    } else if (sel == 2) {
        printf("화씨 입력: ");
        scanf("%1f", &num);
        printf("변환된 섭씨: %f \n", FahToCel(num));
    } else
        printf("선택 오류 \n");
    return 0;
}
