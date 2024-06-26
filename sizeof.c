#include <stdio.h>
#define SIZE 5

int main(void) {
	
	int s[SIZE] = { 10,20,30,40,50 };
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("s[%d] = %d\n",i,s[i]);
	}

	/* sizeof 함수 : 메모리의 크기 값(바이트)을 알려줌 */
	int score[] = { 10, 20, 30, 40, 50, 60 };
	int size = sizeof(score) / sizeof(score[0]); //배열 원소 개수 자동 계산
	// sizeof(score) : 24
	// sizeof(score[0]) : 4
	
	printf("%d\n", size); // size : 6
	
	for (i = 0; i < size; i++) {
		printf("%d ", score[i]); 
	} // 10 20 30 40 50 60

	printf("\n");
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];
	for (i = 0; i < SIZE; i++) {
		b[i] = a[i];
		printf("%d ", b[i]);
	} // 1 2 3 4 5


	return 0;
}
