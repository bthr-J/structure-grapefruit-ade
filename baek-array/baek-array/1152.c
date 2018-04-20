#include <stdio.h>

int main(void) {

	int arr[8];
	int as = 0, de = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 8; i++) {
		if (i + 1 == arr[i])
			as++;
		else if (8 - i == arr[i])
			de++;
		}

	if (as == 8)
		printf("ascending");
	else if (de == 8)
		printf("descending");
	else
		printf("mixed");
	


	return 0;
}


/*
#define N 1000003
int main(void) {

int i;
int cnt = 1;
int length = 0;
char msg[N]=" ";
gets(msg);

length = strlen(msg);

for (i = 0; i < length; i++) {
if (msg[i] == ' ')
cnt++;
}
if (msg[0] == ' ')
cnt--;
if (msg[length - 1] == ' ')
cnt--;

printf("%d\n", cnt);

return 0;
}

//2577
#include <stdio.h>

int main(void) {

int i;
int a;
int mul = 1;

int arr[10];

for (i = 0; i < 10; i++) {
arr[i] = 0;
}
for (i = 0; i < 3; i++) {
scanf("%d", &a);
mul *= a;
}

for (i = 0; mul > 0; i++) {
a = mul % 10;
arr[a] += 1;
mul /= 10;
}
for (i = 0; i < 10; i++) {
printf("%d\n", arr[i]);
}


return 0;
}

//8958
int a;
char arr[80];
int length = 0;

scanf("%d", &a);
for (int i = 0; i < a; i++) {
scanf("%s", arr);
//	gets(arr);
length = strlen(arr);
int cnt = 0;
int ccnt = 0;
for (int i = 0; i < length; i++) {
if (arr[i] == 'O') {
cnt = cnt + 1;
ccnt += cnt;
}
else if (arr[i] == 'X') {
cnt = 0;
}
}
printf("%d\n", ccnt);

}

*/