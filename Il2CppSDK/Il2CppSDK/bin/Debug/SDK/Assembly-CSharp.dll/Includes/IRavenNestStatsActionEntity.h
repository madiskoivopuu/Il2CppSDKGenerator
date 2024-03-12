#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestStatsActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestStatsActionEntity"));
	}


	template <typename T = uintptr_t> T get_ravenNestStatsAction() {
		return ((T (*)(IRavenNestStatsActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRavenNestStatsAction() {
		return ((T (*)(IRavenNestStatsActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(IRavenNestStatsActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(IRavenNestStatsActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestStatsAction() {
		return ((T (*)(IRavenNestStatsActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
