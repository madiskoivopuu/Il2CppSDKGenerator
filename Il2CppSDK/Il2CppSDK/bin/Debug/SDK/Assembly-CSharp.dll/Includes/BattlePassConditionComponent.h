#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassConditionComponent"));
	}

	template <typename T = uintptr_t> T& Currency() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& HasReward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& NeedClaimReward() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = void*> T& MinLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& NeedReset() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BattlePassConditionComponent*, uintptr_t))(Il2CppBase() + 0x1674C60))(this, target);
	}

};

}
