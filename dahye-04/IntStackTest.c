#include <stdio.h>
#include "IntStack.h"

//clear, isfull, isempty, search
/*
int main(void) {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("스택 생성 실패");
		return 1;
	}
	
	while (1) {
		int menu, x;
		int idx;
		printf("현재 데이터 수 : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)푸시 (2)팝 (3)피크 (4)출력 (5)비우기 (6)검색 (7)Full/Empty (0)종료 : ");
		scanf("%d", &menu);

		if (menu == 0) break;
		switch (menu) {
		case 1:
			printf("데이터 : ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a오류 : 푸시에 실패하였습니다.");
			break;

		case 2:
			if (Pop(&s, &x) == -1)
				puts("\a오류 : 팝에 실패하였습니다.");
			else
				printf("팝 데이터는 %d입니다.\n", x);
			break;

		case 3:
			if (Peek(&s, &x) == -1)
				puts("\a오류 : 피크에 실패하였습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;

		case 4:
			Print(&s);
			break;

		case 5:
			Clear(&s);
			break;

		case 6:
			printf("검색할 데이터 : ");
			scanf("%d", &x);
			if ((idx = Search(&s, x)) == -1)
				puts("\a오류 : 서치에 실패하였습니다.");
			else
				printf("서치 데이터는 %d에 있습니다.\n", idx);
			break;

		case 7:
			printf("스택이 가득 %s", IsFull(&s) ? "찼습니다.\n" : "차지 않았습니다.\n");
			printf("스택이 텅 %s", IsEmpty(&s) ? "비었습니다.\n" : "비지 않았습니다.\n");
			break;
		}

	}
	Terminate(&s);
	return 0;
}
*/