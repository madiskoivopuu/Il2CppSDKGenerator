#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITickEntity"));
	}


	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(ITickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(ITickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(ITickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(ITickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(ITickEntity*))(Il2CppBase() + 0x0))(this);
	}

};

