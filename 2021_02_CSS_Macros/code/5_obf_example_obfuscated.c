#include <stdlib.h>

int main(int argc, char** argv) {
	int a = atoi(argv[1]);
	int b = 0;
	while(1) {
		switch(b) {
			case 0:
				if(a == 0)
					b = 1;
				else
					b = 2;
				break;
			case 1:
				return 1;
			case 2:
				return 10;
			default:
				break;
		}
	}
	return 0;
}
