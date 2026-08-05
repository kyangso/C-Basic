#include <stdio.h>

int main(void) {

    int grade;

    printf("점수를 입력하시오 [0~4] :");
    scanf("%d", &grade);

    switch (grade) {
        case 4:                     //if로 보면 grade == 4 <= 이 조건과 같은것 
            printf("휼륭해요!");
            break;
        case 3:
            printf("좋아요");
            break;
        case 2:
            printf("평균이네요");
            break;
        case 1:
            printf("좋지 않네요 ;");
            break;
        case 0:
            printf("좀더 노력하세요...");
            break;
        default:                        //if의 else와 유사, 함수X
            printf("잘못된 학정입니다.");
            break;
    }

    return 0;
}