#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthHungerThirst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthHungerThirst"));
	}

	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Hunger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Thirst() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Show(IUIWindow* window) {
		return ((R (*)(HealthHungerThirst*, IUIWindow*))(Il2CppBase() + 0x128B960))(this, window);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HealthHungerThirst*, float))(Il2CppBase() + 0x128BA74))(this, deltaTime);
	}

};

