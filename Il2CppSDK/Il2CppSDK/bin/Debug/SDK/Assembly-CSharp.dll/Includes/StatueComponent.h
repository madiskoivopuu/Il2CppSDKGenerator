#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueComponent"));
	}

	template <typename T = int32_t> T& MinLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ActiveEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& CanActivateEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& CooldownEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StatueComponent*, uintptr_t))(Il2CppBase() + 0x148FA98))(this, target);
	}

};

}
