#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoAbilityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoAbilityComponent"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Period() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Activator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& UseCondition() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AutoAbilityComponent*, Il2CppObject*))(Il2CppBase() + 0x1A6228C))(this, target);
	}

};

