/*
문제 4.
길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5, 6으로 초기화한 다음,
배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하는 예제를 작성해보자.
단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여
저장된 값의 순서를 뒤바꿔야 한다.
*/

#include <stdio.h>

int main(void) {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *fptr = &arr[0];
    int *bptr = &arr[5];
    int i, temp;

    for (i = 0; i < 3; i++) {
        temp = *fptr;
        *fptr = *bptr;
        *bptr = temp;
        fptr += 1;
        bptr -= 1;
    }

    for (i = 0; i < 6; i++)
        printf("%d", arr[i]);
    return 0;
}
