/*
도전 5.
가위 바위 보 게임을 만들어 보자. 사용자로부터 가위 바위 보 중에서 하나를 입력 받는다.
그리고 컴퓨터는 난수 생성을 통해서 가위 바위 보 중에서 하나를 선택하게 한다. 이 둘을 비교해서 승자와
패자를 가려주는 프로그램을 작성해 보자. 단 프로그램의 진행은 사용자가 질 때까지 계속되어야 하고,
마지막에 가서는 게임의 결과(예: 4승 3무)까지 출력해 주도록 하자.

실행의 예
바위는 1, 가위는 2, 보는 3: 2
당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!
바위는 1, 가위는 2, 보는 3: 1
당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!
바위는 1, 가위는 2, 보는 3: 3
당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!
바위는 1, 가위는 2, 보는 3: 3
당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다!

게임의 결과 : 0승, 3무
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int userChoice, computerChoice;
    int wins = 0, draws = 0;

    // 난수 초기화
    srand(time(0));

    while (1) {
        // 사용자 입력 받기
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &userChoice);

        // 컴퓨터의 선택(1: 바위, 2: 가위, 3: 보)
        computerChoice = rand() % 3 + 1;

        // 선택에 따른 결과 출력
        if (userChoice == 1) printf("당신은 바위 선택, ");
        else if (userChoice == 2) printf("당신은 가위 선택, ");
        else if (userChoice == 3) printf("당신은 보 선택, ");

        if (computerChoice == 1) printf("컴퓨터는 바위 선택, ");
        else if (computerChoice == 2) printf("컴퓨터는 가위 선택, ");
        else if (computerChoice == 3) printf("컴퓨터는 보 선택, ");

        // 결과 판정
        if (userChoice == computerChoice) {
            printf("비겼습니다!\n");
            draws++;
        } else if ((userChoice == 1 && computerChoice == 2) ||
                   (userChoice == 2 && computerChoice == 3) ||
                   (userChoice == 3 && computerChoice == 1)) {
            printf("당신이 이겼습니다!\n");
            wins++;
        } else {
            printf("당신이 졌습니다!\n");
            break; // 사용자가 졌으므로 게임 종료
        }
    }

    // 최종 결과 출력
    printf("\n게임의 결과 : %d승, %d무\n", wins, draws);

    return 0;
}
