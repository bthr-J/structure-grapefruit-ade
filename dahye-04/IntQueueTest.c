#include <stdio.h>
#include "IntQueue.h"
/*
int main(void) {
	IntQueue que;

	if (Initialize(&que, 64) == -1) {
		puts("큐의 생성에 실패하였습니다.");
		return 1;
	}
	while (1) {
		int m, x;
		int idx;

		printf("현재 데이터 수 : %d / %d \n", Size(&que), Capacity(&que));
		printf("(1)인큐 (2)디큐 (3)피크 (4)출력 (5)비우기 (6)검색 (7)Full/Empty (0)종료 : ");
		scanf("%d", &m);

		if (m == 0) break;
		switch (m) {
		case 1 :
			printf("데이터 : ");
			scanf("%d", &x);
			if (Enque(&que, x) == -1)
				puts("\a오류 : 인큐 실패하였습니다.");
			break;

		case 2:
			if (Deque(&que, &x) == -1)
				puts("\a오류 : 디큐 실패하였습니다.");
			else
				printf("디큐한 데이터는 %d입니다.\n", x);
			break;

		case 3:
			if (Peek(&que, &x) == -1)
				puts("\a오류 : 피크 실패하였습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
			break;

		case 4:
			Print(&que);
			break;

		case 5:
			Clear(&que);
			break;

		case 6:
			printf("검색할 데이터 : ");
			scanf("%d", &x);
			if ((idx = Search(&que, x)) == -1)
				puts("\a오류 : 서치에 실패하였습니다.");
			else {
				printf("서치 데이터 인덱스는 %d에 있습니다.\n", idx);
				//Search2
				printf("맨 앞에서부터 %d 위치에 있습니다.\n", Search2(&que, x));
			}
			break;

		case 7:
			printf("스택이 가득 %s", IsFull(&que) ? "찼습니다.\n" : "차지 않았습니다.\n");
			printf("스택이 텅 %s", IsEmpty(&que) ? "비었습니다.\n" : "비지 않았습니다.\n");
			break;

		}
	}
	Terminate(&que);
	return 0;
}
*/