#include <stdio.h>

// 1 - 2 + 3 - 4 + 5 - 6 + ... n-1 n
int main(void) {
	int n;
	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &n);
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			sum += i;
		else
			sum -= i;
			//sum += (-i);
	}

	printf("%d",sum);
}

// �Ҽ�, �ռ��� �Ǻ�
int main0(void)
{
	
	int n;
	printf("2 �̻��� ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &n);

	int flag = 1;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			flag = 0;
	}
	if (flag == 0)
		printf("\n%d��(��) �ռ����Դϴ�", n);
	else
		printf("\n%d��(��) �Ҽ��Դϴ�\n", n);

	return 0;
}   