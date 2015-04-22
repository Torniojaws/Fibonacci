#include <stdio.h>

int fibonacci(int n);

int main() {
	int num, i = 0;
	printf("Count Fibonacci until step: ");
	scanf("%i", &num);
	for(i=0; i<=num; i++) {
		printf("%i\n", fibonacci(i));
	}
}

int fibonacci(int n) {
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}