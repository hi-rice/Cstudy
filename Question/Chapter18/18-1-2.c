/*
문제 2.
아래의 코드를 참조하여 ???을 대신할 수 있는 매개변수 선언을 추가해보자.

void SimpleFuncOne(???, ???){. . . .}
void SimpleFuncTwo(???, ???_{. . . .}
int main(void){
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);
    . . . .
}
*/

void SimpleFuncOne(int *arr1, int *arr2) {
    // arr1은 1차원 배열의 첫 번째 요소를 가리키는 포인터
    // arr2도 1차원 배열의 첫 번째 요소를 가리키는 포인터
    // ...
}

void SimpleFuncTwo(int (*arr3)[4], int (*arr4)[4]) {
    // arr3은 2차원 배열의 첫 번째 1차원 배열을 가리키는 포인터
    // arr4도 2차원 배열의 첫 번째 1차원 배열을 가리키는 포인터
    // ...
}

int main(void) {
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);
    // ...
}

