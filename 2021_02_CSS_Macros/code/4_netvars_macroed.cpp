#include <stdio.h>
#include <map>
#include <string>

std::map<std::string, int> netvars = {
	{ "acceleration", 10 },
	{ "gravity", 8 }
};

#define PRINT_NUM(x) printf("Printing %s: %d\n", #x, x)

#define NETVAR(x) int& net_##x () { \
	static int& ret = netvars[#x]; \
	return ret; \
}

NETVAR(acceleration);
NETVAR(gravity);

int main() {
	PRINT_NUM(net_acceleration());
	net_acceleration() = 12;
	PRINT_NUM(net_acceleration());
	return 0;
}
