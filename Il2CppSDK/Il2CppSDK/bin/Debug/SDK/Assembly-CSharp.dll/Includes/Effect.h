#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Effect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Effect"));
	}

	template <typename T = Il2CppString*> T& EventName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EffectPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& UseRoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Attach() {
		return *(T*)((uintptr_t)this + 0x25);
	}


};

}
