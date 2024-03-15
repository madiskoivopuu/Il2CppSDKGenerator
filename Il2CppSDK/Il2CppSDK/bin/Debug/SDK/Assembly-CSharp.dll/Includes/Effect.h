#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Effect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Effect"));
	}

	template <typename R = Il2CppString*> R& EventName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& EffectPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& LifeTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& UseRoot() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& Attach() {
		return *(R*)((uintptr_t)this + 0x25);
	}


};

