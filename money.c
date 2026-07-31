#include <stdio.h>

int main() {

    int money;
    int money_div_50k;

    printf("얼마를 가지고 계신가요? ");
    scanf("%d", &money);

    money_div_50k = money / 50000;

    printf("50,000원\t %d장\n", money_div_50k);
    // printf("10,000원\t %d장\n", main_10k);
    // printf("5,000원\t %d장\n", main_5k); 

    
    return 0;
}  