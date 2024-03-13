#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipBonusView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipBonusView"));
	}

	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& IsNewIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> static T& kShowIsNewPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Init(VipBonus* bonus, int32_t vipLevel, bool isVipLevelReached) {
		return ((T (*)(VipBonusView*, VipBonus*, int32_t, bool))(Il2CppBase() + 0x15CDC4C))(this, bonus, vipLevel, isVipLevelReached);
	}

};

