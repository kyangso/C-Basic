#include <stdio.h>

int main(void) {
    for(int i = 1;i <= 6; i++) {
        for(int j = 1;j <= i;j++) {     //  "조건" 과 변수를 헷갈리지 말자. 중첩 반복문은 둘중 아니면 셋중 어느것도 쓸모가 없진 않다
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}