#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIUseComponent"));
	}

	template <typename R = int32_t> R& AttackCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Delay() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& Period() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	 Nullable1int32_t>*& UseCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& OnlyOnBorder() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& ActorCondition() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AIUseComponent*, Il2CppObject*))(Il2CppBase() + 0x1D965CC))(this, target);
	}

};

