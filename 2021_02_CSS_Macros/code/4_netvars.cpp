#include <stdio.h>
#include <map>
#include <string>

std::map<std::string, int> netvars = {
	{ "acceleration", 10 },
	{ "gravity", 8 }
};

#define PRINT_NUM(x) printf("Printing %s: %d\n", #x, x)

int main() {
	PRINT_NUM(netvars["acceleration"]);
	netvars["acceleration"] = 12;
	PRINT_NUM(netvars["acceleration"]);
	return 0;
}
