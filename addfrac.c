#include <stdio.h>

int main(void) {
    int num1;
    int denom1;
    int num2;
    int denom2;
    int result_num;
    int result_denom;
  
    printf("계산기\n");

    printf(" 챗지피티 : 츠번째 분수를 입력해라 이말이여! \n");
    scanf("  %d/%d", &num1, &denom1);

    printf("챗지피티: 드번째 분수를 입력해라 이말이여! \n ");
    scanf("  %d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("두리 합은 %d/%d 이란말이여.\n", result_num, result_denom);

    return 0;

}