#include <stdio.h>

//1번
int main(void) {
	printf("#     #\n");
	printf("#     #\n");
	printf("#     #\n");
	printf("#######\n");
	printf("#     #\n");
	printf("#     #\n");
}

//2번
int main2(void) {
	int price, num;
	printf("상품 가격을 입력하시오(원): ");
	scanf_s("%d",&price);

	printf("개수를 입력하시오: ");
	scanf_s("%d", &num);

	printf("총 가격은 %d원입니다.\n",(price*num));
}

//3번
int main3(void) {
	int age;
	printf("나이를 입력하시오: ");
	scanf_s("%d",&age);
	printf("내년이면 %d살이 되시는군요.\n",(age+1));
}

//4번
int main4(void) {
	
	int x; 
	int sum = 0;
	for (int i = 1; i <= 3; i++) {

		printf("정수를 입력하시오: ");
		scanf_s("%d", &x);
		sum += x;
	}
	int avrg = sum / 3;
	printf("\n평균은 %d입니다.\n", avrg);

	
	/*int x, y, z;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);
	printf("정수를 입력하시오: ");
	scanf_s("%d", &y);
	printf("정수를 입력하시오: ");
	scanf_s("%d", &z);

	int avrg = (x + y + z) / 3;
	printf("\n평균은 %d입니다.\n", avrg);*/

}

//5번
int main5(void) {

	int x, y, z;
	printf("정수 3개를 입력하세요: ");
	scanf_s("%d %d %d", &x, &y, &z);

	int result = (x + y) / z;
	printf("첫 번째와 두 번째 정수를 합한 후 세 번째 정수로 나눈 결과: %d\n", result);

}