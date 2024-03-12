#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestRewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardComponent"));
	}

	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RequiredItem() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& FreeSlotsRequired() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ChestRewardComponent*, uintptr_t))(Il2CppBase() + 0x1740948))(this, target);
	}

};

}
