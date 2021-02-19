#include <stdio.h>

int main() {
	int input;

	printf("Input secret code:\n");

	scanf("%d", &input);

	if (input == 42) {
		printf("I see you're a man of culture as well.\n");
	} else if (input == 0xdeadbeef) {
		printf("You were not supposed to see this!\n");
	} else {
		printf("Try again next time!\n");
	}

	return 0;
}
