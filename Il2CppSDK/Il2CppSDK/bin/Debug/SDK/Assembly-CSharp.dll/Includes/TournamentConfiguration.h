#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentConfiguration"));
	}

	template <typename T = int32_t> T& MinPlayerLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SearchingTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ActiveTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TourneysPerDayLimit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_MinPlayerLevel() {
		return ((T (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE340))(this);
	}
	template <typename T = void> T set_MinPlayerLevel(int32_t value) {
		return ((T (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE348))(this, value);
	}
	template <typename T = int32_t> T get_SearchingTime() {
		return ((T (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE350))(this);
	}
	template <typename T = void> T set_SearchingTime(int32_t value) {
		return ((T (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE358))(this, value);
	}
	template <typename T = int32_t> T get_ActiveTime() {
		return ((T (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE360))(this);
	}
	template <typename T = void> T set_ActiveTime(int32_t value) {
		return ((T (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE368))(this, value);
	}
	template <typename T = int32_t> T get_TourneysPerDayLimit() {
		return ((T (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE370))(this);
	}
	template <typename T = void> T set_TourneysPerDayLimit(int32_t value) {
		return ((T (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE378))(this, value);
	}

};

