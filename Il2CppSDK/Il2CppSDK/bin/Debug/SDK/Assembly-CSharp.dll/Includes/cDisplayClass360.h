#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass360
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass36_0"));
	}

	template <typename R = Il2CppString*> R& currentReward() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R OnShowb__0(ProgressionExchangeRewardView* r) {
		return ((R (*)(cDisplayClass360*, ProgressionExchangeRewardView*))(Il2CppBase() + 0x10BBE54))(this, r);
	}

};

