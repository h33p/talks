#include <stdio.h>

int main() {

	int input;

	printf("Input secret code:\n");

	scanf("%d", &input);

	{
		int sTrack = 1;
		while (sTrack != 0) {
			int dSTrack = 1;
			if (sTrack == dSTrack) {
				if (input == 42) sTrack++;
				else sTrack += 2;
			} else if (sTrack == dSTrack + 1) {
				sTrack = 0; {
					{
						printf("I see you're a man of culture as well.\n");
					}
				};
			} else if ((dSTrack += 2) && sTrack == dSTrack) {
				if (input == 0xdeadbeef) sTrack++;
				else sTrack += 2;
			} else if (sTrack == dSTrack + 1) {
				sTrack = 0; {
					{
						printf("You were not supposed to see this!\n");
					}
				};
			} else if (sTrack == dSTrack + 2) {
				{
					printf("Try again next time!\n");
				};
				sTrack = 0;
			}
		}
	};
}
