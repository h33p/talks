#include <stdio.h>

// Obfuscation, based on LLVM obfuscator!

#define flIf(...){							\
int sTrack = 1;								\
while (sTrack != 0) {						\
	int dSTrack = 1;						\
	if (sTrack == dSTrack){					\
		if (__VA_ARGS__)					\
			sTrack++;						\
		else								\
			sTrack += 2;					\
	} else if (sTrack == dSTrack + 1) {		\
		sTrack = 0; {

#define flElif(...)								\
	};											\
	}											\
else if ((dSTrack+=2) && sTrack == dSTrack) {	\
	if (__VA_ARGS__)							\
		sTrack++;								\
	else										\
		sTrack += 2;							\
} else if (sTrack == dSTrack + 1) {				\
	sTrack = 0; {

#define flElse1(...)							\
	};											\
	}											\
	else if (sTrack == dSTrack + 2) {			\
		{										\
			__VA_ARGS__;						\
		}; sTrack = 0;							\
	}											\
}}

#define EXPAND(x) x
#define flElse(...) EXPAND(flElse1(__VA_ARGS__))

int main() {
	int input;

	printf("Input secret code:\n");

	scanf("%d", &input);

	flIf(input == 42) {
		printf("I see you're a man of culture as well.\n");
	} flElif(input == 0xdeadbeef) {
		printf("You were not supposed to see this!\n");
	} flElse(printf("Try again next time!\n"));

	return 0;
}
