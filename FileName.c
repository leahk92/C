#include <stdio.h>

// 1 - 2 + 3 - 4 + 5 - 6 + ... n-1 n
int main(void) {
	int n;
	printf("양의 정수를 입력하세요: ");
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

// 소수, 합성수 판별
int main0(void)
{
	
	int n;
	printf("2 이상의 양의 정수를 입력하세요: ");
	scanf_s("%d", &n);

	int flag = 1;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			flag = 0;
	}
	if (flag == 0)
		printf("\n%d은(는) 합성수입니다", n);
	else
		printf("\n%d은(는) 소수입니다\n", n);

	return 0;
}   