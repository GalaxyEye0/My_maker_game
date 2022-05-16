
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void main() {

	int  num, V_num = 0, L_num = 0;
	int p_money = 2000, p_bet;
	char p_code[20], re_code[20];

	srand((unsigned)time(NULL));

	
		printf("\n\n이 게임은 프로그램이 생성한 숫자의 홀짝을 맞추는 게임입니다.\n");
		printf("먼저 홀짝을 결정하고 베팅을 합니다. 홀짝을 맞추면 베팅한 금액에 4배를 받습니다.\n");
		printf("만약 실패한다면 베팅한 금액에 2배를 잃게 됩니다.\n");
		printf("자본금은 2000만원으로, 모두 잃거나 재시작을 하지 않으신다면 게임은 자동으로 종료됩니다.\n\n");
		
		do
		{
			{
				num = rand() % 100 + 1;

				printf("\n----------프로그램이 숫자를 생성했습니다----------\n\n");
				printf("홀 또는 짝을 입력해주세요: ");
				scanf_s("%s", p_code, sizeof(p_code));

				printf("베팅금액을 입력해주세요\n");
				printf("베팅금액(단위: 만원) :  ");
				scanf_s("%d", &p_bet);

				if (num % 2 == 0 && strcmp(p_code, "홀") == 0) {
					printf("\n틀렸습니다. 프로그램이 만든 숫자는 %d이었습니다.", num);
					p_money = p_money - p_bet * 2;
					printf("\n현재 자본금은 %d만원입니다.", (p_money - p_bet * 2));
					if (p_money <= 0)
					{
						printf("\n자본금이 부족합니다. 게임이 종료됩니다.");
						break;
					}
					printf("\n다시 플레이 하시려면 PLAY를 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

				else if (num % 2 == 0 && strcmp(p_code, "짝") == 0) {
					printf("\n축하합니다. 프로그램이 만든 숫자는 %d이었습니다. 승리하셨습니다.", num);
					p_money = p_money + p_bet * 4;
					printf("\n현재 자본금은 %d만원입니다.", p_money);
					if (p_money <= 0)
					{
						printf("\n자본금이 부족합니다. 게임이 종료됩니다.");
						break;
					}
					printf("\n다시 플레이 하시려면 PLAY를 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

				else if (num % 2 == 1 && strcmp(p_code, "홀") == 0) {
					printf("\n축하합니다. 프로그램이 만든 숫자는 %d이었습니다.", num);
					p_money = p_money + p_bet * 4;
					printf("\n현재 자본금은 %d만원입니다.", p_money);
					if (p_money <= 0)
					{
						printf("\n자본금이 부족합니다. 게임이 종료됩니다.");
						break;
					}
					printf("\n다시 플레이 하시려면 PLAY를 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

				else if (num % 2 == 1 && strcmp(p_code, "짝") == 0) {
					printf("\n틀렸습니다. 프로그램이 만든 숫자는 %d이었습니다.\n ", num);
					p_money = p_money - p_bet * 2;
					printf("\n현재 자본금은 %d만원입니다.", p_money);
					if (p_money <= 0)
					{
						printf("\n자본금이 부족합니다. 게임이 종료됩니다.");
						break;
					}
					printf("\n다시 플레이 하시려면 PLAY를 입력해주세요: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			}
		} while ((strcmp(re_code, "PLAY") == 0 || ( p_money > 0)));

}
