/*
문제 3.
이 문제도 위의 문제와 유사하다. 즉, ???을 대신할 수 있는 매개변수 선언을 추가하는 것이다.
그러나 이번에는 약간의 응용력을 요구한다.

void SimpleFuncOne(???, ???){. . . .}
void SimpleFuncTwo(???, ???){. . . .}
int main(void){
    int* arr1[3];
    int* arr2[3][5];
    int** arr3[5];
    int*** arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);
    . . . .
*/

void SimpleFuncOne(int **arr1, int ***arr2) {
    // arr1은 int* 타입의 포인터들을 가리키는 이중 포인터
    // arr2는 int* 타입의 포인터 배열을 가리키는 삼중 포인터
    // ...
}

void SimpleFuncTwo(int ***arr3, int ****arr4) {
    // arr3은 int** 타입의 포인터 배열을 가리키는 삼중 포인터
    // arr4는 int*** 타입의 포인터 배열을 가리키는 사중 포인터
    // ...
}

int main(void) {
    int *arr1[3];
    int *arr2[3][5];
    int **arr3[5];
    int ***arr4[3][5];

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);
    // ...
}
