#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestRewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardComponent"));
	}

	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RequiredItem() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& EffectName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& FreeSlotsRequired() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChestRewardComponent*, Il2CppObject*))(Il2CppBase() + 0x1740948))(this, target);
	}

};

