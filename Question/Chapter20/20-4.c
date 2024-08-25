/*
도전 4.
도전 3에서 제시한 예쩨를 여러 번 실행해보면 한가지 특징을 발견할 수 있다. 그것은 출력되는 난수가
규칙적이라는 것이다. 예를 들어서 처음 실행했을 때 생성된 난수가 21, 1, 43, 13, 2이라면 몇 번을
실행해도 그 값이 그대로 출력이 된다. 그리고 이는 분명히 문제다!
왜냐하면 이렇게 되면 예측이 가능하기 때문에 진짜 난수라 할 수 없기 때문이다.
그래서 rand 함수가 반환하는 난수를 가리켜 '의사 난수(pseudo-random number)'라 하는 것이다.
의사 난수는 가짜 난수를 의미한다. 그래서 ANSI 표준에서는 이러한 문제를 어느 정도 해결할 수 있도록
srand라는 함수를 정의하였다.

#include <stdlib.h>
void srand(unsigned int seed);  // 발생할 난수의 씨드 값 지정

위의 함수는 하나의 값을 전달받는다. 그리고 그 전달된 값은 난수를 생성하는데 필요한 씨앗으로
사용된다. 그래서 이 값을 가리켜 씨드(seed) 값이라 한다. '콩 심은데 콩 나고, 팥 심은데 팥 난다'라는
속담이 있듯이, 씨드 값이 무엇이냐에 따라서 rand 함수가 반환하는 난수의 형태가 달라진다.
그럼 다음 예제를 통해서 난수 생성에 필요한 씨앗을 심어보겠다.

(SeedRandomNum.c)
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int seed, i;
    printf("씨드 값 입력: ");
    scanf("%d", &seed);
    scrand(seed);   // 씨앗을 심는다.

    for(i=0; i<5; i++)
        printf("정수 출력 : %d \n", rand());    // 열매를 수확한다.
    return 0;
}

위 예제 8행에서는 프로그램 사용자로부터 씨드 값을 입력 받아서 9행에서 srand의 인자로 전달하고 있다.
즉 씨앗을 하나 심은 것이다. 씨앗을 심었으니 열매를 거둬들여야 한다. 12행에서는 rand 함수를 이용해서 열매를
거둬들이고 있다. srand 함수도 공부했으니 이제 제법 그럴듯한 난수를 발생시킬 수 있는가? 아니다! 여전히
문제는 남아있다. 위 예제처럼 프로그램을 실행할 때마다 씨드 값을 입력 받을 수 없는 노릇 아닌가?
설사 입력 받는다 해도 매법 다른 값을 입력 받는다는 가정을 세우는 것은 무리가 있다.
그런데 이에 대한 해결책이 하나 있다. 시스템 시간을 이용하는 것이다. 현재 여러분 컴퓨터의 시간 값을
얻어와서 srand 함수의 인자로 전달하는 것이다. 컴퓨터의 시간은 계속 변하기 때문에 매번 다른 씨앗을 얻는
도구로 활용이 가능하다. 그렇다면 컴퓨터의 현재시간을 어떻게 얻어와야 할까?
헤더파일 time.h에 선언되어 있는 time이라는 이름의 함수를 사용하면 된다. 이 함수는 컴퓨터의 현재시간과
1970년 1월 1일 이후의 시간적 차를 초단위로 계산해서 반환해 준다. 우리는 정확한 시간을 얻겠다는 것이
아니고 프로그램 실행 시마다 다른 정수 하나를 얻겠다는 것이므로 이정도면 충분하다. 그럼 이를 적용한 예제를
제시하겠다. 실제로 매 실행 시마다 출력되는 난수가 다름을 확인할 수 있을 것이다.

(TimeSeedRandomNum.c)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;
    srand((int)time(NULL)); // 현재시간을 이용해서 씨드 설정
    for(i=0; i<5; i++)
        printf("정수 출력: %d \n", rand());
    return 0;
}

위 예제 8행에서는 time 함수를 호출하면서 인자로 NULL을 전달하고 있다.
이렇듯 단순히 시간정보를 반환 받는 것이 목적이라면 NULL을 전달하면 된다.
자! 그럼 문제를 제시하겠다. 두 개의 주사위를 던졌을 때의 결과를 출력하는 프로그램을 작성해보자.
물론 그 결과는 예측이 불가능해야 한다.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int i;
    srand((int) time(NULL));
    for (i = 0; i < 2; i++)
        printf("주사위 %d의 결과 : %d\n", i + 1, rand() % 5 + 1);

    return 0;
}



