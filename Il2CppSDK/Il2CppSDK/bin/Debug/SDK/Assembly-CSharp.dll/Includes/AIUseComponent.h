#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AIUseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIUseComponent"));
	}

	template <typename T = int32_t> T& AttackCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Period() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Nullable1int32_t>*> T& UseCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& OnlyOnBorder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ActorCondition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TargetsSelector*> T& Selector() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AIUseComponent*, Il2CppObject*))(Il2CppBase() + 0x1D965CC))(this, target);
	}

};

