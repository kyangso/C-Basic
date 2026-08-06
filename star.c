#include <stdio.h>

int main(void) {

    for(int i = 1;i <= 6; i++) {
        // printf("%d ", i);
        for(int j = 1;  ;j++) {         // i = j 를 조건으로 만들어라. i 가 1일때 1번 반복 이렇게.. 검증해라
            printf("*");
        }
    }

    return 0;
}