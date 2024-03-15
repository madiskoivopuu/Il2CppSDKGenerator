#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassConditionComponent"));
	}

	template <typename R = CurrencyType> R& Currency() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<bool>*& HasReward() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x14);
	}
	 Nullable1<bool>*& NeedClaimReward() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x16);
	}
	 Nullable1<int32_t>*& MinLevel() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x18);
	}
	 Nullable1<int32_t>*& MaxLevel() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x20);
	}
	 Nullable1<bool>*& NeedReset() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BattlePassConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1674C60))(this, target);
	}

};

