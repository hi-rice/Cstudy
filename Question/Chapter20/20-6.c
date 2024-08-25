/*
도전 6.
친구와 둘이서 숫자 맞추기 게임을 해 본적이 있을 것이다(보통은 야구 게임이라고 불린다).
이것을 컴퓨터와 할 수 있도록 프로그램을 작성해보자. 게임의 방식은 다음과 같다.
컴퓨터는 0에서 9사이의 숫자 중에서 서로 다른 세 개의 숫자를 고르고, 사용자는 이것을 맞춰야 한다.
중요한 것은 숫자의 순서까지 정확히 맞춰야 한다는 것이다.
단 사용자가 예상한 숫자를 입력할 때마다 컴퓨터는 입력된 숫자와 컴퓨터 자신이 생각한 숫자가 얼마나
비슷한지를 알려줘야 한다. 예를 들어서 컴퓨터가 고른 숫자가 1 4 9 이고, 사용자가 입력한 숫자가
4 0 9 이면, 두 개의 숫자 4와 9가 일치한다. 9는 숫자와 위치까지 일치하지만(1 strike),
4는 숫자만 일지한다(1 ball). 이런 경우 컴퓨터는 다음과 같은 메세지를 출력해준다.

    1strike, 1ball

만약에 사용자가 1 4 9 를 입력하였다면 "3strike, 0ball"이 되어서 프로그램은 종료가 된다.
이 때 몇번 만에 3 strike를 얻어냈는지에 대해서도 출력해 주기로 하자(진행하면서
"몇 번째 도전입니다."라는 메세지를 출력해줘도 좋다.)

실행의 예
Start Game!
3개의 숫자 선택: 1 2 8
1번째 도전 결과: 1strike, 1ball!
3개의 숫자 선택: 3 0 8
2번째 도전 결과: 2strike, 0ball!
3개의 숫자 선택: 2 0 8
3번째 도전 결과: 3strike, 0ball!

Game Over!

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 세 개의 서로 다른 숫자를 생성하는 함수
void GenerateNumbers(int *numbers) {
    int i, j;
    for (i = 0; i < 3; i++) {
        int num;
        do {
            num = rand() % 10;
            for (j = 0; j < i; j++) {
                if (numbers[j] == num) {
                    break;
                }
            }
        } while (j != i);
        numbers[i] = num;
    }
}

// 스트라이크와 볼을 계산하는 함수
void CalculateStrikeBall(int *comp, int *user, int *strike, int *ball) {
    int i, j;
    *strike = 0;
    *ball = 0;

    for (i = 0; i < 3; i++) {
        if (user[i] == comp[i]) {
            (*strike)++;
        } else {
            for (j = 0; j < 3; j++) {
                if (user[i] == comp[j]) {
                    (*ball)++;
                }
            }
        }
    }
}

int main(void) {
    int comp[3], user[3];
    int strike, ball, attempts = 0;

    srand(time(0)); // 난수 초기화

    GenerateNumbers(comp); // 컴퓨터가 세 개의 숫자를 생성
    printf("Start Game!\n");

    while (1) {
        attempts++;
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &user[0], &user[1], &user[2]);

        CalculateStrikeBall(comp, user, &strike, &ball);
        printf("%d번째 도전 결과: %dstrike, %dball!\n", attempts, strike, ball);

        if (strike == 3) {
            printf("\nGame Over! %d번 만에 성공하셨습니다!\n", attempts);
            break;
        }
    }

    return 0;
}
