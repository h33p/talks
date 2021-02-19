#include <stdio.h>
#include <map>
#include <string>
#include <sstream>

// Literally taken from my 2017 CSGO hack... DON'T DO THIS!!!

#define CONFIG(type, name, default_val) \
	type name = default_val; \
	type active_##name = default_val; \
	void bind_##name (type bind_value) { \
		active_##name = bind_value; \
	} \
	void bind_press_##name (bool pressed) { \
		if (pressed) \
			name = active_##name; \
		else \
			name = default_val; \
	}

CONFIG(bool, menu_open, false);

CONFIG(int, aimbotEnabled, 1);
CONFIG(int, aimbotMPSlicing, 2);
CONFIG(int, aimbotBTCycle, 3);
CONFIG(int, aimbotBTToHit, 1);
CONFIG(int, aimbotMaxTargets, 5);
CONFIG(int, aimbotAutoOptimize, 1);
CONFIG(int, aimbotBTOptimize, 1);

CONFIG(int, lagCompensation, 0);
CONFIG(int, animFix, 0);
CONFIG(int, antiUntrusted, 1);
CONFIG(int, extendedFakelag, 0);

CONFIG(int, resolverEnable, 1);
CONFIG(int, resolvePitches, 0);

CONFIG(float, exploitTimeShift, 10.f);
CONFIG(float, exploitRapidFireAccuracy, 1.3f);

CONFIG(int, moveBunnyhopping, 0);
CONFIG(int, moveAutostrafe, 0);
CONFIG(int, moveZHop, 0);
CONFIG(int, moveZHopRate, 20);
CONFIG(int, moveZHopSize, 20);

CONFIG(int, visualsThirdPerson, 0);
CONFIG(int, visualsPostProcessing, 1);
CONFIG(int, visualsFog, 1);
CONFIG(float, visualsShadowDirection, 1);
CONFIG(int, visualsVGUIUseHue, 1);

CONFIG(int, espEnabled, 0);
CONFIG(int, espSkeleton, 0);
CONFIG(int, espName, 0);
CONFIG(int, espHP, 0);

#define DOCONFIG(location, type) \
	type##CONFIG(location, menu_open); \
	\
	type##CONFIG(location, aimbotEnabled);\
	type##CONFIG(location, aimbotMPSlicing);\
	type##CONFIG(location, aimbotBTCycle);\
	type##CONFIG(location, aimbotBTToHit);\
	type##CONFIG(location, aimbotMaxTargets);\
	type##CONFIG(location, aimbotAutoOptimize);\
	type##CONFIG(location, aimbotBTOptimize);\
	\
	type##CONFIG(location, lagCompensation);\
	type##CONFIG(location, animFix);\
	type##CONFIG(location, antiUntrusted);\
	type##CONFIG(location, extendedFakelag);\
	\
	type##CONFIG(location, resolverEnable);\
	type##CONFIG(location, resolvePitches);\
	\
	type##CONFIG(location, moveBunnyhopping);\
	type##CONFIG(location, moveAutostrafe);\
	type##CONFIG(location, moveZHop);\
	type##CONFIG(location, moveZHopRate);\
	type##CONFIG(location, moveZHopSize);\
	\
	type##CONFIG(location, visualsThirdPerson);\
	type##CONFIG(location, visualsPostProcessing);\
	type##CONFIG(location, visualsFog);\
	type##CONFIG(location, visualsShadowDirection);\
	type##CONFIG(location, visualsVGUIUseHue);\
	\
	type##CONFIG(location, espEnabled);\
	type##CONFIG(location, espSkeleton);\
	type##CONFIG(location, espName);\
	type##CONFIG(location, espHP);\


#define SCONFIG(location, option) { \
	std::stringstream ss; \
	ss << option; \
	location[#option] = ss.str(); \
}

#define LCONFIG(location, option) { \
	auto it = location.find(#option); \
	std::stringstream ss; \
	ss << it->second; \
	ss >> option; \
}

static std::map<std::string, std::string> save_config() {
	static std::map<std::string, std::string> serialized;
	DOCONFIG(serialized, S);
	return serialized;
}

static void load_config(const std::map<std::string, std::string>& serialized) {
	DOCONFIG(serialized, L);
}

int main() {

	auto serialized = save_config();

	for (auto i : serialized) {
		printf("%s: %s\n", i.first.c_str(), i.second.c_str());
	}

	serialized.erase(serialized.find("visualsFog"));

	load_config(serialized);

	return 0;
}

