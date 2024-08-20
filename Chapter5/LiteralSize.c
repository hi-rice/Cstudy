#include <stdio.h>

int main(void) {
    printf("literal int size: %lu \n", sizeof(7));
    printf("literal double size: %lu \n", sizeof(7.14));
    printf("literal char size: %lu \n", sizeof('A'));
    return 0;
}
