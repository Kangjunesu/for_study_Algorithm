#include <stdio.h>

int main() {
	unsigned int S = 0;
	scanf_s("%u", &S);

	int N = 0; //N���� �ڿ���
	unsigned int sum = 0; //n���� �ڿ����� ��
	int i = 1;

	while (sum <= S) {
		if (S - sum - i > i) {
			N++;
			sum = sum + i;
		}
		i++;
	}

	printf("%d", N);
	return 0;
}