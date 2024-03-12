#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthHungerThirst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthHungerThirst"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Hunger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Thirst() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Show(uintptr_t window) {
		return ((T (*)(HealthHungerThirst*, uintptr_t))(Il2CppBase() + 0x128B960))(this, window);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HealthHungerThirst*, float))(Il2CppBase() + 0x128BA74))(this, deltaTime);
	}

};

}
