#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITicksCountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITicksCountEntity"));
	}


	template <typename R = TicksCountComponent*> R get_ticksCount() {
		return ((R (*)(ITicksCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTicksCount() {
		return ((R (*)(ITicksCountEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTicksCount(int32_t newValue) {
		return ((R (*)(ITicksCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceTicksCount(int32_t newValue) {
		return ((R (*)(ITicksCountEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveTicksCount() {
		return ((R (*)(ITicksCountEntity*))(Il2CppBase() + 0x0))(this);
	}

};

