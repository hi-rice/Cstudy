/*
#include <stdio.h>

int main(void) {
    char ch = 9;
    int inum = 1052;
    double dnum = 3.1415;
    printf("변수 ch의 크기: %d \n", sizeof(ch));
    printf("변수 inum의 크기: %d \n", sizeof(inum));
    printf("변수 dnum의 크기: %d \n", sizeof(dnum));

    printf("char의 크기: %d \n", sizeof(char));
    printf("int의 크기: %d \n", sizeof(int));
    printf("long의 크기: %d \n", sizeof(long));
    printf("long long의 크기: %d \n", sizeof(long long));
    printf("float의 크기: %d \n", sizeof(float));
    printf("double의 크기: %d \n", sizeof(double));
    return 0;
}
*/

#include <stdio.h>

int main(void) {
    char ch = 9;
    int inum = 1052;
    double dnum = 3.1415;
    printf("변수 ch의 크기: %lu \n", sizeof(ch));
    printf("변수 inum의 크기: %lu \n", sizeof(inum));
    printf("변수 dnum의 크기: %lu \n", sizeof(dnum));

    printf("char의 크기: %lu \n", sizeof(char));
    printf("int의 크기: %lu \n", sizeof(int));
    printf("long의 크기: %lu \n", sizeof(long));
    printf("long long의 크기: %lu \n", sizeof(long long));
    printf("float의 크기: %lu \n", sizeof(float));
    printf("double의 크기: %lu \n", sizeof(double));
    return 0;
}

/*
%d를 사용했을 때 빌드 시 컴파일러 경고가 뜸.
컴파일러 경고는 printf 함수의 포맷 문자열에서 지정한 형식(%d)이 실제 인수의 유형과
일치하지 않기 때문에 발생한다.
sizeof 연산자는 size_t 유형의 값을 반환하며,
이는 일반적으로 unsigned long 또는 유사한 정수 유형이다.
따라서 sizeof의 결과를 출력하려면 printf에서 %d 대신 %lu를 사용해야 합니다.
*/


