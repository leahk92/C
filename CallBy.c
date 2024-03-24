#include <stdio.h>
void swap_call_by_value(int x, int y);
void swap_call_by_reference(int* x, int* y);


int main(void){
	
	int a = 3, b = 5;
	/*
	printf("�� ����\n");
	printf("ȣ�� �� a = %d, b = %d\n", a, b);
	swap_call_by_value(a, b);
	printf("ȣ�� �� a = %d, b = %d\n", a, b);*/

	printf("���� ����\n");
	printf("ȣ�� �� a = %d, b = %d\n", a, b);
	swap_call_by_reference(&a, &b);
	printf("ȣ�� �� a = %d, b = %d\n", a, b);
}


void swap_call_by_value(int x, int y) {
	printf("�Լ� �� x = %d, y = %d\n", x, y);
	int temp = x;
	x = y;
	y = temp;
	printf("�Լ� �� x = %d, y = %d\n", x, y);
}

void swap_call_by_reference(int *x, int *y) {
	printf("�Լ� �� x = %d, y = %d\n", *x, *y);
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("�Լ� �� x = %d, y = %d\n", *x, *y);
}
