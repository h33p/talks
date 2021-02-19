#include <stdio.h>

#define B_EMOJI 0x1F171
#define PRINT_NUM(x) printf("Printing number: %d\n", x)

int main() {
	PRINT_NUM(5);
	PRINT_NUM(B_EMOJI);
	return 0;
}
