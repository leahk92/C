#include <stdio.h>

int main(void) {
	/* �迭�� �ʱ�ȭ */
		int array_[4] = { 10,20,30 };
		for (int i = 0; i < 4; i++) {
			printf("%d ", array_[i]);
		}
		printf("\n");
		// 0 20 30 0

		int array__[4] = { 0 };
		for (int i = 0; i < 4; i++) {
			printf("%d ", array__[i]);
		}
		printf("\n");
		// 0 0 0 0

		int array___[4] = { 10 };
		for (int i = 0; i < 4; i++) {
			printf("%d ", array___[i]);
		}
		printf("\n");
		// 10 0 0 0
	
}