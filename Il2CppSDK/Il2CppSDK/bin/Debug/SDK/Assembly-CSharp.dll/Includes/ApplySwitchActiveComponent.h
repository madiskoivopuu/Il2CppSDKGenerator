#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplySwitchActiveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplySwitchActiveComponent"));
	}

	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<bool>*& SetActive() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& OnEffectName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& OffEffectName() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplySwitchActiveComponent*, Il2CppObject*))(Il2CppBase() + 0x1895548))(this, target);
	}

};

