#include <stdio.h>

int main() {

    int money;
    int money_div_50k_print;
    int money_10k;
    int money_10k_print;
    int money_min_10k;
    int money_5k;
    int money_min_5k;
    int money_5k_print;
    int money_1k_print;
    int money_min_1k;
    int money_1k;
    int money_500_print;
    int money_min_500;
    int money_500;
    int money_100_print;
    int money_min_100;
    int money_100;
    int money_50_print;
    int money_min_50;
    int money_50;
    int money_10_print;
    int money_min_10;
    int money_10;
    printf("얼마를 가지고 계신가요? ");
    scanf("%d", &money);

    // money_div_50k_print = money / 50000;

    // money_10k = 50000 * money_div_50k_print;
    // money_min_10k = money - money_10k;
    // money_10k_print = money_min_10k / 10000;

    // money_5k = 10000 * money_10k_print;
    // money_min_5k = money_min_10k - money_5k;
    // money_5k_print = money_min_5k / 5000;

    // money_1k = 5000 * money_5k_print;
    // money_min_1k = money_min_5k - money_1k;
    // money_1k_print = money_min_1k / 1000;

    // money_500 = 1000 * money_1k_print;
    // money_min_500 = money_min_1k - money_500;
    // money_500_print = money_min_500 / 500;
    
    // money_100 = 500 * money_500_print;
    // money_min_100 = money_min_500 - money_100;
    // money_100_print = money_min_100 / 100;

    // money_50 = 100 * money_100_print;
    // money_min_50 = money_min_100 - money_50;
    // money_50_print = money_min_50 / 50;

    // money_10 = 50 * money_50_print;
    // money_min_10 = money_min_50 - money_10;
    // money_10_print = money_min_10 / 10;



    // printf("50,000원\t %d장\n", money_div_50k_print);
    // printf("10,000원\t %d장\n",money_10k_print);
    // printf("5,000원\t\t %d장\n", money_5k_print); 
    // printf("1,000원\t\t %d장\n", money_1k_print);
    // printf("500원\t\t %d개\n", money_500_print);
    // printf("100원\t\t %d개\n", money_100_print);
    // printf("50원\t\t %d개\n", money_50_print);
    // printf("10원\t\t %d개\n", money_10_print);

    printf("50,000원\t %d장\n", money / 50000);
    printf("10,000원\t %d장\n", (money % 50000) / 10000);
    printf("5,000원\t\t %d장\n", ((money % 50000) % 10000) / 5000);

    return 0;
}  