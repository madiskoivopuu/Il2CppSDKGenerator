#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestStatsActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestStatsActionEntity"));
	}


	template <typename R = RavenNestStatsActionComponent*> R get_ravenNestStatsAction() {
		return ((R (*)(IRavenNestStatsActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRavenNestStatsAction() {
		return ((R (*)(IRavenNestStatsActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(IRavenNestStatsActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(IRavenNestStatsActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestStatsAction() {
		return ((R (*)(IRavenNestStatsActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

