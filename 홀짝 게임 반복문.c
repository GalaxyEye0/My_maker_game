#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

	int c_num = 0, p_num, re_num, num;

	printf("게임을 시작하려면 0을 입력해주세요. \n입력:");
	scanf_s("%d", &re_num);

	srand((unsigned)time(NULL));

	do
	{
		{
			num = rand() % 100 + 1;

			printf("프로그램이 숫자를 생성했습니다\n\n");
			printf("홀이면 1을, 짝이면 2를 입력해주세요: ");
			scanf_s("%d", &p_num);

			if (num % 2 == 0 && p_num == 1) {
					printf("틀렸습니다. 프로그램이 만든 숫자는 %d이었습니다.", num);
					printf("\n다시 플레이 하시려면 0을 입력해주세요: ");
					scanf_s("%d", &re_num);
				}

			else if (num % 2 == 0 && p_num == 2) {
					printf("축하합니다. 프로그램이 만든 숫자는 %d이었습니다. 승리하셨습니다.", num);
					printf("\n다시 플레이 하시려면 0을 입력해주세요: ");
					scanf_s("%d", &re_num);
				}

			else if (num % 2 == 1 && p_num == 1) {
					printf("축하합니다. 프로그램이 만든 숫자는 %d이었습니다.", num);
					printf("\n다시 플레이 하시려면 0을 입력해주세요: ");
					scanf_s("%d", &re_num);
				}

			else if (num % 2 == 1 && p_num == 2) {
					printf("틀렸습니다. 프로그램이 만든 숫자는 %d이었습니다.\n ", num);
					printf("\n다시 플레이 하시려면 0을 입력해주세요: ");
					scanf_s("%d", &re_num);
				}

			else
					printf("\n음, 무언가 잘못된 것 같네요. 재시작 해주세요\n");
		}
	} while (re_num == 0);
}
