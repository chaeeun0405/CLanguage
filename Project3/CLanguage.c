#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B); //���ڰ� �� �� ������ ������ �������� ����ż� �Ҽ��� ����ǹǷ� ����ȯ!!
	printf("%d", A % B);
	return 0;
}