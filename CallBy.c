#include <stdio.h>
void swap_call_by_value(int x, int y);
void swap_call_by_reference(int* x, int* y);


int main(void){
	
	int a = 3, b = 5;
	/*
	printf("값 전달\n");
	printf("호출 전 a = %d, b = %d\n", a, b);
	swap_call_by_value(a, b);
	printf("호출 후 a = %d, b = %d\n", a, b);*/

	printf("참조 전달\n");
	printf("호출 전 a = %d, b = %d\n", a, b);
	swap_call_by_reference(&a, &b);
	printf("호출 후 a = %d, b = %d\n", a, b);
}


void swap_call_by_value(int x, int y) {
	printf("함수 내 x = %d, y = %d\n", x, y);
	int temp = x;
	x = y;
	y = temp;
	printf("함수 내 x = %d, y = %d\n", x, y);
}

void swap_call_by_reference(int *x, int *y) {
	printf("함수 내 x = %d, y = %d\n", *x, *y);
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("함수 내 x = %d, y = %d\n", *x, *y);
}
