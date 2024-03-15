#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardComponent"));
	}

	template <typename R = bool> R& Automatic() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& SendToMailOnEndTime() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = RewardRules*> R& Rule() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = Il2CppArray<Resource*>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Resource*>*> R& PremiumResources() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Resource*>*> R& MainServerResources() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& PremiumRandomGroup() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = bool> R get_HasRandomGroups() {
		return ((R (*)(RewardComponent*))(Il2CppBase() + 0x11A01BC))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RewardComponent*, Il2CppObject*))(Il2CppBase() + 0x11A0204))(this, target);
	}

};

