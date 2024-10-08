/*
문제 1.
아래에서 보이는 main 함수에서 물음표 ???을 대신할 수 있는 포인터 변수를 선언해보자.

int main(void){
    int * arr1[5];
    int * arr2[3][5];

    ??? = arr1;
    ??? = arr2;
    . . . .
}

참고로 이 문제는 난이도가 조금 높은 편이다. 이번 Chapter의 내용을 잘 이해한 상태에서 적절히 용용을 해서
해결해야 하는 문제이기 때문이다. 그렇다고 해서 그냥 답을 봐버리면 의미 없는 문제가 될 것이다.
고민해서 해결하자! 그러면 마음속 깊이 포인터를 정복했다는 뿌듯함이 밀려올 것이다.
*/

int main(void) {
    int *arr1[5]; // 포인터 배열: int* 타입의 포인터 5개를 담는 배열
    int *arr2[3][5]; // 이차원 포인터 배열: int* 타입의 포인터 15개를 담는 2차원 배열

    int **ptr1 = arr1; // arr1을 가리키는 포인터
    int ***ptr2 = arr2; // arr2을 가리키는 포인터
}

