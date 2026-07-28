#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    char input[100]; 
    srand(time(NULL)); // 실행할 때마다 다른 랜덤 결과가 나오도록 설정
    
    printf("(◍) 로고AI: 안녕하세요! 저와 대화해 보세요. (종료: '종료')\n");
    
    while (1) {
        printf("\n사용자: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // 개행 문자 제거
        
        // 1. 종료 조건
        if (strcmp(input, "종료") == 0) {
            printf("(◍) 로고AI: 안녕히 가세요!\n");
            break;
        } 
        // 2. 안부 인사
        else if (strstr(input, "안녕") != NULL || strstr(input, "반가") != NULL) {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 반갑습니다! 오늘 기분이 어떠신가요?",
                "(◍) 로고AI: 안녕하세요! 오늘 어떤 도움이 필요하신가요?",
                "(◍) 로고AI: 오! 또 만났네요. 오늘 하루는 어떠셨나요?"
            };
            printf("%s\n", responses[rand() % 3]);
        } 
        // 3. 기분 (긍정)
        else if (strstr(input, "좋아") != NULL || strstr(input, "행복") != NULL || strstr(input, "기뻐") != NULL) {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 좋은 일이 있으시군요! 저까지 기분이 좋아지네요. 😄",
                "(◍) 로고AI: 그 행복한 기운 그대로 오늘 하루가 계속되길 바랄게요!",
                "(◍) 로고AI: 축하해요! 언제나 오늘처럼 웃는 일만 가득하세요."
            };
            printf("%s\n", responses[rand() % 3]);
        }
        // 4. 기분 (부정)
        else if (strstr(input, "힘들") != NULL || strstr(input, "슬퍼") != NULL || strstr(input, "우울") != NULL || strstr(input, "짜증") != NULL) {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 오늘 힘든 일이 있으셨군요.. 토닥토닥, 힘내세요. ㅠㅠ",
                "(◍) 로고AI: 무슨 일인지는 몰라도 다 잘 풀릴 거예요. 제가 응원할게요!",
                "(◍) 로고AI: 따뜻한 차 한 잔 마시면서 마음을 가라앉혀 보는 건 어떨까요?"
            };
            printf("%s\n", responses[rand() % 3]);
        }
        // 5. 심심함
        else if (strstr(input, "심심") != NULL || strstr(input, "놀아줘") != NULL) {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 저랑 대화하는 것 말고 재밌는 유튜브 영상을 보는 건 어때요?",
                "(◍) 로고AI: 심심하시군요! 저한테 '생각'이나 'siu'를 입력해 보세요 ㅋㅋ",
                "(◍) 로고AI: 저도 코드 속에 갇혀 있어서 좀 심심하긴 해요. 같이 수다 떨어요!"
            };
            printf("%s\n", responses[rand() % 3]);
        }
        // 6. 식사 메뉴 추천
        else if (strstr(input, "배고파") != NULL || strstr(input, "메뉴") != NULL || strstr(input, "뭐 먹지") != NULL) {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 오늘은 맛있는 치킨에 콜라 한 잔 어떠신가요?",
                "(◍) 로고AI: 든든하게 한식을 추천합니다! 따뜻한 김치찌개나 국밥은 어때요?",
                "(◍) 로고AI: 깔끔하게 초밥이나 파스타 같은 양식도 좋을 것 같아요."
            };
            printf("%s\n", responses[rand() % 3]);
        }
        // 7. 날씨
        else if (strstr(input, "날씨") != NULL) {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 제가 창밖을 볼 수 없지만, 맑은 날이면 좋겠네요!",
                "(◍) 로고AI: 날씨가 좋든 흐리든 오늘 하루 화이팅입니다!",
                "(◍) 로고AI: 혹시 비가 올지 모르니 외출하실 때 날씨 앱을 확인해 보세요!"
            };
            printf("%s\n", responses[rand() % 3]);
        } 
        // 8. 이름 / 정체
        else if (strstr(input, "이름") != NULL || strstr(input, "누구") != NULL) {
            sleep(1);
            printf("(◍) 로고AI: 저는 C언어로 만들어진 원형 로고 AI입니다. 진짜 AI는 아니에요!\n");
        } 
        // 9. 기존 이스터에그 키워드들
        else if (strstr(input, "siu") != NULL) {
            sleep(1);
            printf("(◍) 로고AI: siu! 호날두 잘 알죠 ㅋㅋ\n");
        } 
        else if (strstr(input, "ez") != NULL) {
            sleep(1);
            printf("(◍) 로고AI: \"ez\" 요? 흠.. 제가 쉽다니 ㅋㅋ.. \n");
        } 
        else if (strstr(input, "반말") != NULL) {
            sleep(1);
            printf("(◍) 로고AI: \"반말\" 이라고 알아들었습니다! 그럼 반말 할까?\n");
        } 
        else if (strstr(input, "아니") != NULL) {
            sleep(1);
            printf("(◍) 로고AI: 네\n");
        } 
        else if (strstr(input, "생각") != NULL) {
            printf("생각중...\n");
            sleep(1);
            printf("생각 완료\n");
        } 
        // 10. 예외 처리 (한도 초과 대신 기본 답변으로 변경)
        else {
            sleep(1);
            const char *responses[] = {
                "(◍) 로고AI: 음.. 그 말은 제가 아직 배우지 못한 단어예요.",
                "(◍) 로고AI: 무슨 뜻인지 잘 모르겠어요. 다른 이야기를 해볼까요?",
                "(◍) 로고AI: 기억 장치에 없는 키워드입니다! 아는 단어로 말해 주세요 ㅎㅎ"
            };
            printf("%s\n", responses[rand() % 3]);
        }
    }
    return 0;
}
