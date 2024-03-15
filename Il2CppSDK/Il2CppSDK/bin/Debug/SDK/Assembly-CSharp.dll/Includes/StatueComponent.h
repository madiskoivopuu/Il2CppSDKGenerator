#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueComponent"));
	}

	template <typename R = int32_t> R& MinLevel() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ActiveEffect() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& CanActivateEffect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& CooldownEffect() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StatueComponent*, Il2CppObject*))(Il2CppBase() + 0x148FA98))(this, target);
	}

};

