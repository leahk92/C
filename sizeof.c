#include <stdio.h>
#define SIZE 5

int main(void) {
	
	int s[SIZE] = { 10,20,30,40,50 };
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("s[%d] = %d\n",i,s[i]);
	}

	/* sizeof �Լ� : ����Ʈ ũ�⸦ �˷��� */
	int score[] = { 10, 20, 30, 40, 50, 60 };
	int size = sizeof(score) / sizeof(score[0]);
	// sizeof(score) : 24
	// sizeof(score[0]) : 4
	
	printf("%d\n", size); // size : 6
	
	for (i = 0; i < size; i++) {
		printf("%d ", score[i]);
	}
	return 0;
}