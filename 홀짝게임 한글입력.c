#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void main() {

	int c_num = 0, re_num, num;
	char p_code[20], re_code[20];

	printf("게임을 시작하려면 0을 입력해주세요. \n입력:");
	scanf_s("%d", &re_num);

	srand((unsigned)time(NULL)); 
	// warning C4244: '함수': 'time_t'에서 'unsigned int'(으)로 변환하면서 데이터가 손실될 수 있습니다. 
	//언어는 c이지만 컴파일러는 c++이기에 time안에 NULL을 써준다.

	do
	{
		{
			num = rand() % 100 + 1;

			printf("프로그램이 숫자를 생성했습니다\n\n");
			printf("홀 또는 짝을 입력해주세요: ");
			scanf_s("%s", p_code, sizeof(p_code));

			if (num % 2 == 0 && strcmp(p_code, "홀") == 0) {
					printf("틀렸습니다. 프로그램이 만든 숫자는 %d이었습니다.", num);
					printf("\n다시 플레이 하시려면 재시작을 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			else if (num % 2 == 0 && strcmp(p_code, "짝") == 0) {
					printf("축하합니다. 프로그램이 만든 숫자는 %d이었습니다. 승리하셨습니다.", num);
					printf("\n다시 플레이 하시려면 재시작을 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			else if (num % 2 == 1 && strcmp(p_code, "홀") == 0) {
					printf("축하합니다. 프로그램이 만든 숫자는 %d이었습니다.", num);
					printf("\n다시 플레이 하시려면 재시작을 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			else if (num % 2 == 1 && strcmp(p_code, "짝") == 0) {
					printf("틀렸습니다. 프로그램이 만든 숫자는 %d이었습니다.\n ", num);
					printf("\n다시 플레이 하시려면 재시작을 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}
		}
	} while (strcmp(re_code, "재시작") == 0);
}
//새로 알게 된 문법 strcmp(변수, "문자열") == 0), if문 조건에 문자열을 충족시키고 싶으면 이 문법을 이용해야 함.