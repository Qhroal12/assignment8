#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fibonacci(int n) {

	if (n <= 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);

}

int main() {

	int n;

	int f = 1;
	int f_1 = 0;
	int temp = 0;

	printf("피보나치 수열 f(n)의 n을 입력하세요: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {													//반복문 사용 시 사용;
		
		temp = f;
		f = f + f_1;
		f_1 = temp;

	}

	printf("%d번째 피보나치 수 : %d\n", n, temp);

	//printf("함수 호출 피보나치 수 : %d", Fibonacci(n));							//재귀함수 사용 시 사용

	return 0;
}