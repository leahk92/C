#include <stdio.h>

//1��
int main(void) {
	printf("#     #\n");
	printf("#     #\n");
	printf("#     #\n");
	printf("#######\n");
	printf("#     #\n");
	printf("#     #\n");
}

//2��
int main2(void) {
	int price, num;
	printf("��ǰ ������ �Է��Ͻÿ�(��): ");
	scanf_s("%d",&price);

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("�� ������ %d���Դϴ�.\n",(price*num));
}

//3��
int main3(void) {
	int age;
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d",&age);
	printf("�����̸� %d���� �ǽô±���.\n",(age+1));
}

//4��
int main4(void) {
	
	int x; 
	int sum = 0;
	for (int i = 1; i <= 3; i++) {

		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &x);
		sum += x;
	}
	int avrg = sum / 3;
	printf("\n����� %d�Դϴ�.\n", avrg);

	
	/*int x, y, z;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &y);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &z);

	int avrg = (x + y + z) / 3;
	printf("\n����� %d�Դϴ�.\n", avrg);*/

}

//5��
int main5(void) {

	int x, y, z;
	printf("���� 3���� �Է��ϼ���: ");
	scanf_s("%d %d %d", &x, &y, &z);

	int result = (x + y) / z;
	printf("ù ��°�� �� ��° ������ ���� �� �� ��° ������ ���� ���: %d\n", result);

}