#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B); //숫자가 둘 다 정수면 정수형 나눗셈이 실행돼서 소숫점 절삭되므로 형변환!!
	printf("%d", A % B);
	return 0;
}