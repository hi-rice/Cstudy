/*
필자가 좋아하는 것 중 하나가 금요일 저녁 퇴근길에 DVD나 만화책을 잔뜩 빌리고,
동네 슈퍼에 들러서 군것질거리를 사 가지고 집에 들어가는 것이다. 오늘은 금요일이다.
현재 필자의 주머니에는 5천 원이 있다. DVD 한 편을 빌리면 3,500원이 남는다.
슈퍼에 들려서 크림빵(500원), 새우깡(700원), 콜라(400원)를 사려한다.
잔돈을 하나도 남기지 않고 이 세 가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가?
물론 여기에는 여러 가지 경우의 수가 있을 것이다. 필자가 어떠한 선택을 할 수 있는지 여러분이 제시해 주기 바란다.
*/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int z = 1; z <= 7; z++) {
            for (int x = 1; x <= 8; x++) {
                if (i * 700 + z * 500 + x * 400 == 3500) {
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", z, i, x);
                }
            }
        }
    }
    return 0;
}
