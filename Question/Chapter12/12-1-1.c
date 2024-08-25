/*
문제 1.
아래의 예제 실행 시 변수와 포인터 변수의 관계를 그림을 그려서 설명해보자.
또한 출력의 결과도 예상해보자.
int main(void){
    int num=10;
    int * ptr=&num;
    int * ptr2=ptr1;

    (*ptr1)++;
    (*ptr2)++;
    printf("%d \n", num);
    return 0;
}
*/

/*
ptr1과 ptr2가 동시에 변수 num을 가리키는 형태가 된다.
이 상태에서 아래의 두 문장을 실행하게 되니, 변수 num의 값은 ptr1을 통해서 1이 증가되고,
ptr2를 통해서 1이 증가된다.
(*ptr1)++;
(*ptr2)++;
*/
