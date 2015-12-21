#import <iostream>

int main() {

	int max = 1000;
	int result = 0;

	for (int i = 0; i < max; i++) {
		if (i % 3 == 0) {
			result += i;
		} else if (i % 5 == 0) {
			result += i;
		}
	}

	std::cout << result << "\n";

	return 0;
}