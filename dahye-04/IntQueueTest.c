#include <stdio.h>
#include "IntQueue.h"
/*
int main(void) {
	IntQueue que;

	if (Initialize(&que, 64) == -1) {
		puts("ť�� ������ �����Ͽ����ϴ�.");
		return 1;
	}
	while (1) {
		int m, x;
		int idx;

		printf("���� ������ �� : %d / %d \n", Size(&que), Capacity(&que));
		printf("(1)��ť (2)��ť (3)��ũ (4)��� (5)���� (6)�˻� (7)Full/Empty (0)���� : ");
		scanf("%d", &m);

		if (m == 0) break;
		switch (m) {
		case 1 :
			printf("������ : ");
			scanf("%d", &x);
			if (Enque(&que, x) == -1)
				puts("\a���� : ��ť �����Ͽ����ϴ�.");
			break;

		case 2:
			if (Deque(&que, &x) == -1)
				puts("\a���� : ��ť �����Ͽ����ϴ�.");
			else
				printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3:
			if (Peek(&que, &x) == -1)
				puts("\a���� : ��ũ �����Ͽ����ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4:
			Print(&que);
			break;

		case 5:
			Clear(&que);
			break;

		case 6:
			printf("�˻��� ������ : ");
			scanf("%d", &x);
			if ((idx = Search(&que, x)) == -1)
				puts("\a���� : ��ġ�� �����Ͽ����ϴ�.");
			else {
				printf("��ġ ������ �ε����� %d�� �ֽ��ϴ�.\n", idx);
				//Search2
				printf("�� �տ������� %d ��ġ�� �ֽ��ϴ�.\n", Search2(&que, x));
			}
			break;

		case 7:
			printf("������ ���� %s", IsFull(&que) ? "á���ϴ�.\n" : "���� �ʾҽ��ϴ�.\n");
			printf("������ �� %s", IsEmpty(&que) ? "������ϴ�.\n" : "���� �ʾҽ��ϴ�.\n");
			break;

		}
	}
	Terminate(&que);
	return 0;
}
*/