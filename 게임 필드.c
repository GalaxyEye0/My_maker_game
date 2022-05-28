#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>



int player_atk, player_hp;
int monster_code, moster_atk, monster_hp;
int battle_num;

void battle_UI() {
	printf("\n[1. �ο��] \t[2.����]\t[3.����ģ��]\n");
	while (monster_hp == 0)
	 {
		printf("��ȣ �Է�: ");
		scanf_s("%d", &battle_num);
	
	 }
}

void monster_battle(int monster_code){
	switch (monster_code)
	{
	case 1:
		moster_atk = 3;
		monster_hp = 20;

		printf("...0...0...\n");
		printf("_������_\n");
		printf(".MMMM.\n");
		printf("�̸�: ������\tü��: 20\t���ݷ�: 3");
		battle_UI();

	default:
		break;
	}

} // ���� ���� �����

void battle() {
	srand((unsigned)time(NULL));
	monster_code  = rand() % 3 + 1;
	monster_battle(monster_code);
}
int main(void)
{
	int x = 0, y = 0;

	char Map[10][10] = {
		{'@','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','M'},
		{'.','.','.','.','.','.','M','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'M','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','M','.','.','.'},
		{'.','.','.','.','.','.','M','.','.','.'},
		{'.','.','.','.','.','.','.','.','G','.'},
	};
	int condition = 1;
	while (condition) {
		printf("�����̵�: a, �������̵�: d, ���� �̵�: w, �Ʒ��� �̵�: s\n");
		// Map ���
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				printf("%c", Map[i][j]);
			}
			printf("\n");
		}
		char action = _getch();
		switch (action)
		{
		case 'a':
			Map[y][x] = '.';
			if (x != 0)
			{
				x = x - 1;
			}
			// ���� ���� �˻�
			if (Map[y][x] == 'G') {
				condition = 0;
				printf("�� ���� ����ϼ̽��ϴ�!\n");
			}
			if (Map[y][x] == 'M') {
				condition = 0;
				printf("����\n");
			}
			Map[y][x] = '@';
			break;
		case 'd':
			Map[y][x] = '.';
			if (x != 9)
			{
				x = x + 1;
			}
			// ���� ���� �˻�
			if (Map[y][x] == 'G') {
				condition = 0;
				printf("�� ���� ����ϼ̽��ϴ�!\n");
			}
			if (Map[y][x] == 'M') {
				condition = 0;
				printf("����\n");
			}
			Map[y][x] = '@';
			break;
		case 'w':
			Map[y][x] = '.';
			if (x != 0)
			{
				y = y - 1;
			}
			// ���� ���� �˻�
			if (Map[y][x] == 'G') {
				condition = 0;
				printf("����\n");
			}
			if (Map[y][x] == 'M') {
				condition = 0;
				printf("����\n");
			}
			Map[y][x] = '@';
			break;
		case 's':
			Map[y][x] = '.';
			if (y != 9)
			{
				y = y + 1;
			}
			// ���� ���� �˻�
			if (Map[y][x] == 'G') {
				condition = 0;
				printf("����\n");
			}
			if (Map[y][x] == 'M') {
				condition = 0;
				printf("����\n");
			}
			Map[y][x] = '@';
			break;
		default:
			break;
		}
		system("cls");
	}
}