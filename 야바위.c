
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void main() {

	int  num, V_num = 0, L_num = 0;
	int p_money = 2000, p_bet;
	char p_code[20], re_code[20];

	srand((unsigned)time(NULL));

	
		printf("\n\n�� ������ ���α׷��� ������ ������ Ȧ¦�� ���ߴ� �����Դϴ�.\n");
		printf("���� Ȧ¦�� �����ϰ� ������ �մϴ�. Ȧ¦�� ���߸� ������ �ݾ׿� 4�踦 �޽��ϴ�.\n");
		printf("���� �����Ѵٸ� ������ �ݾ׿� 2�踦 �Ұ� �˴ϴ�.\n");
		printf("�ں����� 2000��������, ��� �Ұų� ������� ���� �����Ŵٸ� ������ �ڵ����� ����˴ϴ�.\n\n");
		
		do
		{
			{
				num = rand() % 100 + 1;

				printf("\n----------���α׷��� ���ڸ� �����߽��ϴ�----------\n\n");
				printf("Ȧ �Ǵ� ¦�� �Է����ּ���: ");
				scanf_s("%s", p_code, sizeof(p_code));

				printf("���ñݾ��� �Է����ּ���\n");
				printf("���ñݾ�(����: ����) :  ");
				scanf_s("%d", &p_bet);

				if (num % 2 == 0 && strcmp(p_code, "Ȧ") == 0) {
					printf("\nƲ�Ƚ��ϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.", num);
					p_money = p_money - p_bet * 2;
					printf("\n���� �ں����� %d�����Դϴ�.", (p_money - p_bet * 2));
					if (p_money <= 0)
					{
						printf("\n�ں����� �����մϴ�. ������ ����˴ϴ�.");
						break;
					}
					printf("\n�ٽ� �÷��� �Ͻ÷��� PLAY�� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

				else if (num % 2 == 0 && strcmp(p_code, "¦") == 0) {
					printf("\n�����մϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�. �¸��ϼ̽��ϴ�.", num);
					p_money = p_money + p_bet * 4;
					printf("\n���� �ں����� %d�����Դϴ�.", p_money);
					if (p_money <= 0)
					{
						printf("\n�ں����� �����մϴ�. ������ ����˴ϴ�.");
						break;
					}
					printf("\n�ٽ� �÷��� �Ͻ÷��� PLAY�� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

				else if (num % 2 == 1 && strcmp(p_code, "Ȧ") == 0) {
					printf("\n�����մϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.", num);
					p_money = p_money + p_bet * 4;
					printf("\n���� �ں����� %d�����Դϴ�.", p_money);
					if (p_money <= 0)
					{
						printf("\n�ں����� �����մϴ�. ������ ����˴ϴ�.");
						break;
					}
					printf("\n�ٽ� �÷��� �Ͻ÷��� PLAY�� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

				else if (num % 2 == 1 && strcmp(p_code, "¦") == 0) {
					printf("\nƲ�Ƚ��ϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.\n ", num);
					p_money = p_money - p_bet * 2;
					printf("\n���� �ں����� %d�����Դϴ�.", p_money);
					if (p_money <= 0)
					{
						printf("\n�ں����� �����մϴ�. ������ ����˴ϴ�.");
						break;
					}
					printf("\n�ٽ� �÷��� �Ͻ÷��� PLAY�� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			}
		} while ((strcmp(re_code, "PLAY") == 0 || ( p_money > 0)));

}
