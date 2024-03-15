#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoAbilityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoAbilityComponent"));
	}

	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Period() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& Activator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& UseCondition() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AutoAbilityComponent*, Il2CppObject*))(Il2CppBase() + 0x1A6228C))(this, target);
	}

};

