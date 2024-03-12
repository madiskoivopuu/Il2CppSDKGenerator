#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestStatsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestStatsEntity"));
	}


	template <typename T = uintptr_t> T get_ravenNestStats() {
		return ((T (*)(IRavenNestStatsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRavenNestStats() {
		return ((T (*)(IRavenNestStatsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRavenNestStats(Il2CppList<uintptr_t>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((T (*)(IRavenNestStatsEntity*, Il2CppList<uintptr_t>*, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename T = void> T ReplaceRavenNestStats(Il2CppList<uintptr_t>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((T (*)(IRavenNestStatsEntity*, Il2CppList<uintptr_t>*, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename T = void> T RemoveRavenNestStats() {
		return ((T (*)(IRavenNestStatsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
