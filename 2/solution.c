#include <stdio.h>

int main() {

	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long sum = 2;

	for (unsigned long i = 0; i < 5000; i++) {
		unsigned long tmp = num1 + num2;
		num1 = num2;
		num2 = tmp;

		if (num2 > 4000000) {
			break;
		}

		if (num2 % 2 == 0) {
			sum += tmp;
		}
	}

	printf("%lu\n", sum);

	return 0;
}