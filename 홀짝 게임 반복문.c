/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

	int c_num = 0, p_num, re_num, num;

	printf("������ �����Ϸ��� 0�� �Է����ּ���. \n�Է�:");
	scanf_s("%d", &re_num);

	srand((unsigned)time(NULL));

	do
	{
		{
			num = rand() % 100 + 1;

			printf("���α׷��� ���ڸ� �����߽��ϴ�\n\n");
			printf("Ȧ�̸� 1��, ¦�̸� 2�� �Է����ּ���: ");
			scanf_s("%d", &p_num);

			if (num % 2 == 0 && p_num == 1) {
					printf("Ʋ�Ƚ��ϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� 0�� �Է����ּ���: ");
					scanf_s("%d", &re_num);
				}

			else if (num % 2 == 0 && p_num == 2) {
					printf("�����մϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�. �¸��ϼ̽��ϴ�.", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� 0�� �Է����ּ���: ");
					scanf_s("%d", &re_num);
				}

			else if (num % 2 == 1 && p_num == 1) {
					printf("�����մϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� 0�� �Է����ּ���: ");
					scanf_s("%d", &re_num);
				}

			else if (num % 2 == 1 && p_num == 2) {
					printf("Ʋ�Ƚ��ϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.\n ", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� 0�� �Է����ּ���: ");
					scanf_s("%d", &re_num);
				}

			else
					printf("\n��, ���� �߸��� �� ���׿�. ����� ���ּ���\n");
		}
	} while (re_num == 0);
}
*/