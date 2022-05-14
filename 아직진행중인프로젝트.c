
#include <stdio.h>
#include <conio.h>
#include <string.h>

int tutorial;
int Tutorial();
void game_start();
void game_main();

int check();
void s_1();
void s_2();
void s_3();
void s_4();
void s_5();


char name1[128], name2[128];
int heart1 = 500, heart2 = 500;
int damage1, damage2;
int input1, input2;
int sub_1, sub_2;

int main(void)
{

	printf("\n====================\n");
	printf("  1.튜토리얼 보기 \n\n  2.게임 시작하기\n\n");
	printf("\n====================\n");
	printf("입력: ");
	scanf_s("%d", &tutorial);

	switch (tutorial)
	{
	case 1:
		Tutorial();
	case 2:
		game_start();

	default:
		printf("잘못된 입력입니다.\n\n");
		return main();
	}
		
	return 0;

}

int Tutorial()
{
	printf("\n이 게임은 더 큰 카드를 낸 사람이 이기는 간단한 게임입니다. \n\n");
	printf("기본체력은 각각 500씩이며 진 사람은 낸 카드의 20배의 피해를 받게 되고 체력이 0이 되면 패배합니다.\n\n");
	printf("카드는 1부터 9까지 있으며 각각 한 번씩만 사용할 수 있습니다. \n\n");
	printf("9개의 카드 중 5개를 사용하면 다시 1부터 9까지 모든 카드를 사용할 수 있습니다. \n\n");
	printf("그리고 특수룰 3가지가 있습니다. \n\n");
	printf("첫번째, 가장 큰 카드 9를 이길 수 있는 카드는 1이 유일합니다. \n\n");
	printf("두번째, 같은 카드를 냈을 경우에는 무효처리가 되고 낸 카드들은 소모되지 않습니다. \n\n");
	printf("마지막으로, 두 사람이 낸 카드의 합이 10이 되면 이긴 사람은 다음 판 동안 흑기사 모드가 됩니다.\n\n");
	printf("흑기사 모드가 되면 1~9사이의 숫자를 제약없이 낼 수 있으나, 지게 된다면 낸 카드의 40배의 피해를 받게 됩니다.\n\n");
	printf("흑기사는 다음 판이 되면 돌아오고 양 선수 모두 카드가 리필이 됩니다. \n\n\n\n\n");

	printf("\n====================\n");
	printf("  1. 메뉴로 돌아가기 \n\n  2.게임 시작하기\n\n");
	printf("\n====================\n");
	printf("입력: ");
	scanf_s("%d", &tutorial);

	switch (tutorial)
	{
	case 1:
		return main();
	case 2:
		game_start();

	default:
		printf("잘못된 입력입니다. 메인 메뉴로 돌아갑니다.\n\n");
		main();
	}

	return 0;
}

void game_start()
{
	printf("게임을 시작하겠습니다.\n");
	printf("선 후공을 먼저 결정해주세요.\n");

	printf("선공을 잡은 플레이어의 이름을 입력해주세요. \n");
	printf("입력: ");
	scanf_s("%s", name1, sizeof(name1));

	printf("\n후공을 잡은 플레이어의 이름을 입력해주세요. \n");
	printf("입력: ");
	scanf_s("%s", name2, sizeof(name2));

	game_main();
}

void game_main() {
	printf("%s님의 차례입니다. 1~9사이의 숫자를 입력해주세요. 되돌릴 수 없으니 신중하게 입력해주세요.\n", name1);
	printf("입력: ");
	input1 = _getch();
	printf("---입력완료---\n\n");

	printf("%s님의 차례입니다. 1~9사이의 숫자를 입력해주세요. 되돌릴 수 없으니 신중하게 입력해주세요.\n", name2);
	printf("입력: ");
	input2 = _getch();
	printf("---입력완료---\n\n");

	check();
}

int check()
{
	int check1 = 0, check2 = 0, check3 = 0, check4 = 0, check5 = 0;

	printf("input1 : 아스키코드 => %d , 키보드 입력값 => %c \n", input1, input1);
	printf("input2 : 아스키코드 => %d , 키보드 입력값 => %c \n", input2, input2);

	if (sub_1 == sub_2)
		s_1();
	else if (sub_1 > sub_2)
		s_2();
	else if (sub_1 < sub_2)
		s_3();
	else if ((sub_1 + sub_2 == 74) && (sub_1 > sub_2))
		s_4();
	else if ((sub_1 + sub_2 == 74) && (sub_1 < sub_2))
		s_5();
	else {
		printf("잘못된 입력입니다. ");
		game_main();
	}

	return 0;
}

void s_1()
{
	printf("두 플레이어가 낸 숫자 카드가 같습니다. 다시 카드를 냅니다.\n");
	game_main();
}

void s_2() 
{
	printf("%s님은 숫자%c카드를 %s님은 숫자%c카드를 냈습니다.\n", name1, input1, name2, input2);
	printf("%s님이 승리하셨습니다.", name1);

}

void s_3() 
{
	printf("%s님은 숫자%c카드를 %s님은 숫자%c카드를 냈습니다.\n", name1, input1, name2, input2);
	printf("%s님이 승리하셨습니다.", name2);

}

void s_4()
{
	printf("%s님은 숫자%c카드를 %s님은 숫자%c카드를 냈습니다.\n", name1, input1, name2, input2);
	printf("특수룰로 인해 %s님이 승리하셨습니다.", name1);

}

void s_5()
{
	printf("%s님은 숫자%c카드를 %s님은 숫자%c카드를 냈습니다.\n", name1, input1, name2, input2);
	printf("특수룰로 인해 %s님이 승리하셨습니다.", name2);

}
