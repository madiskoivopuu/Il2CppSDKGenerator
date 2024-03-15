#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDurabilityDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDurabilityDamageComponent"));
	}

	template <typename R = bool> R& UseWeapon() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& DestroyOnEnd() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyDurabilityDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x18942CC))(this, targetObject);
	}

};

