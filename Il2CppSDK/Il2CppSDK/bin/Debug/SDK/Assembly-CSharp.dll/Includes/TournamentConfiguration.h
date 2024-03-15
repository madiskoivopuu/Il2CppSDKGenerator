#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentConfiguration"));
	}

	template <typename R = int32_t> R& MinPlayerLevel() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& SearchingTime() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& ActiveTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& TourneysPerDayLimit() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = int32_t> R get_MinPlayerLevel() {
		return ((R (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE340))(this);
	}
	template <typename R = void> R set_MinPlayerLevel(int32_t value) {
		return ((R (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE348))(this, value);
	}
	template <typename R = int32_t> R get_SearchingTime() {
		return ((R (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE350))(this);
	}
	template <typename R = void> R set_SearchingTime(int32_t value) {
		return ((R (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE358))(this, value);
	}
	template <typename R = int32_t> R get_ActiveTime() {
		return ((R (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE360))(this);
	}
	template <typename R = void> R set_ActiveTime(int32_t value) {
		return ((R (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE368))(this, value);
	}
	template <typename R = int32_t> R get_TourneysPerDayLimit() {
		return ((R (*)(TournamentConfiguration*))(Il2CppBase() + 0x14FE370))(this);
	}
	template <typename R = void> R set_TourneysPerDayLimit(int32_t value) {
		return ((R (*)(TournamentConfiguration*, int32_t))(Il2CppBase() + 0x14FE378))(this, value);
	}

};

