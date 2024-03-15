#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestStatsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestStatsEntity"));
	}


	template <typename R = RavenNestStatsComponent*> R get_ravenNestStats() {
		return ((R (*)(IRavenNestStatsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRavenNestStats() {
		return ((R (*)(IRavenNestStatsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((R (*)(IRavenNestStatsEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename R = void> R ReplaceRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((R (*)(IRavenNestStatsEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0x0))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename R = void> R RemoveRavenNestStats() {
		return ((R (*)(IRavenNestStatsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

