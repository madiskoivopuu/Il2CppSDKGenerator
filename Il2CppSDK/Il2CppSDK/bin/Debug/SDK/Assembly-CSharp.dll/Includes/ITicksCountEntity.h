#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITicksCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITicksCountEntity"));
	}


	template <typename T = TicksCountComponent*> T get_ticksCount() {
		return ((T (*)(ITicksCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTicksCount() {
		return ((T (*)(ITicksCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTicksCount(int32_t newValue) {
		return ((T (*)(ITicksCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceTicksCount(int32_t newValue) {
		return ((T (*)(ITicksCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveTicksCount() {
		return ((T (*)(ITicksCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

