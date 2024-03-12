#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDurabilityDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDurabilityDamageComponent"));
	}

	template <typename T = bool> T& UseWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& DestroyOnEnd() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyDurabilityDamageComponent*, uintptr_t))(Il2CppBase() + 0x18942CC))(this, targetObject);
	}

};

}
