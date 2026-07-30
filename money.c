#include <stdio.h>

int main() {
    int money;
    int money2;
    int thing;
    printf("얼마를 가지고 계신가요? ");
    scanf("%d", &money);

    thing = money / 50000;

    printf("50000원 %d장\n", thing);
    // printf("장\n");


    return 0;
}  