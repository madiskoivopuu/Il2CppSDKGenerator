#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardComponent"));
	}

	template <typename T = bool> T& Automatic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SendToMailOnEndTime() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& Rule() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PremiumResources() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MainServerResources() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& PremiumRandomGroup() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_HasRandomGroups() {
		return ((T (*)(RewardComponent*))(Il2CppBase() + 0x11A01BC))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RewardComponent*, uintptr_t))(Il2CppBase() + 0x11A0204))(this, target);
	}

};

}
