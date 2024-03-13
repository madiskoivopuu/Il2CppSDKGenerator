#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITickEntity"));
	}


	template <typename T = TickComponent*> T get_tick() {
		return ((T (*)(ITickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(ITickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(ITickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(ITickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(ITickEntity*))(Il2CppBase() + 0x0))(this);
	}

};

