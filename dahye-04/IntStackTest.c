#include <stdio.h>
#include "IntStack.h"

//clear, isfull, isempty, search
/*
int main(void) {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("���� ���� ����");
		return 1;
	}
	
	while (1) {
		int menu, x;
		int idx;
		printf("���� ������ �� : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (5)���� (6)�˻� (7)Full/Empty (0)���� : ");
		scanf("%d", &menu);

		if (menu == 0) break;
		switch (menu) {
		case 1:
			printf("������ : ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			break;

		case 2:
			if (Pop(&s, &x) == -1)
				puts("\a���� : �˿� �����Ͽ����ϴ�.");
			else
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3:
			if (Peek(&s, &x) == -1)
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			else
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4:
			Print(&s);
			break;

		case 5:
			Clear(&s);
			break;

		case 6:
			printf("�˻��� ������ : ");
			scanf("%d", &x);
			if ((idx = Search(&s, x)) == -1)
				puts("\a���� : ��ġ�� �����Ͽ����ϴ�.");
			else
				printf("��ġ �����ʹ� %d�� �ֽ��ϴ�.\n", idx);
			break;

		case 7:
			printf("������ ���� %s", IsFull(&s) ? "á���ϴ�.\n" : "���� �ʾҽ��ϴ�.\n");
			printf("������ �� %s", IsEmpty(&s) ? "������ϴ�.\n" : "���� �ʾҽ��ϴ�.\n");
			break;
		}

	}
	Terminate(&s);
	return 0;
}
*/