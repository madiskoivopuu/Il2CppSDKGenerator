#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonusView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonusView"));
	}

	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& IsNewIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> static R& kShowIsNewPrefix() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Init(VipBonus* bonus, int32_t vipLevel, bool isVipLevelReached) {
		return ((R (*)(VipBonusView*, VipBonus*, int32_t, bool))(Il2CppBase() + 0x15CDC4C))(this, bonus, vipLevel, isVipLevelReached);
	}

};

