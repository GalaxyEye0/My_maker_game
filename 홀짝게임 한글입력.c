#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void main() {

	int c_num = 0, re_num, num;
	char p_code[20], re_code[20];

	printf("������ �����Ϸ��� 0�� �Է����ּ���. \n�Է�:");
	scanf_s("%d", &re_num);

	srand((unsigned)time(NULL)); 
	// warning C4244: '�Լ�': 'time_t'���� 'unsigned int'(��)�� ��ȯ�ϸ鼭 �����Ͱ� �սǵ� �� �ֽ��ϴ�. 
	//���� c������ �����Ϸ��� c++�̱⿡ time�ȿ� NULL�� ���ش�.

	do
	{
		{
			num = rand() % 100 + 1;

			printf("���α׷��� ���ڸ� �����߽��ϴ�\n\n");
			printf("Ȧ �Ǵ� ¦�� �Է����ּ���: ");
			scanf_s("%s", p_code, sizeof(p_code));

			if (num % 2 == 0 && strcmp(p_code, "Ȧ") == 0) {
					printf("Ʋ�Ƚ��ϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� ������� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			else if (num % 2 == 0 && strcmp(p_code, "¦") == 0) {
					printf("�����մϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�. �¸��ϼ̽��ϴ�.", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� ������� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			else if (num % 2 == 1 && strcmp(p_code, "Ȧ") == 0) {
					printf("�����մϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� ������� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}

			else if (num % 2 == 1 && strcmp(p_code, "¦") == 0) {
					printf("Ʋ�Ƚ��ϴ�. ���α׷��� ���� ���ڴ� %d�̾����ϴ�.\n ", num);
					printf("\n�ٽ� �÷��� �Ͻ÷��� ������� �Է����ּ���: ");
					scanf_s("%s", &re_code, sizeof(re_code));
				}
		}
	} while (strcmp(re_code, "�����") == 0);
}
//���� �˰� �� ���� strcmp(����, "���ڿ�") == 0), if�� ���ǿ� ���ڿ��� ������Ű�� ������ �� ������ �̿��ؾ� ��.