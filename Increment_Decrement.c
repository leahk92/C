#include <stdio.h>

int main() {

	/* ���������� */
	/* Increment and Decrement Operators */

	int a = 5;
	int x = a++;
	printf("x = %d, a = %d\n", x, a);	// x = 5, a = 6

	int b = 5;
	int y = ++b;
	printf("y = %d, b = %d\n\n", y, b);	// y = 6, b = 6

	/////

	int i = 5;	// i�� : 5
	i += 30;	// i�� : 35
	int j = --i;	// j�� : 34 >>> i��:34
	int k = i++;	// k�� : 34 >>> i��:35

	printf("%d\n", i + k);	// 35 + 34 = 69
	printf("%d\n", i = k);	// 34
	printf("%d\n", ++i);	// 35
	printf("%d\n", i++);	// 35
	printf("i = %d\n", i);	// i = 36
	printf("%d\n", i += j++);	// 36 + 34 = 70
	printf("j = %d\n", j);	// j = 35
	printf("%d\n", j += ++k);	// 35 + 35 = 70*/
}