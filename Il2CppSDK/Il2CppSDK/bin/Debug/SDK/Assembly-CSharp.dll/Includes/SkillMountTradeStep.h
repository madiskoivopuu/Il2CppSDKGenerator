#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep.h" 

class SkillMountTradeStep : public BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillMountTradeStep"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& traderSkillItems() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = MountFuser*> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = TraderSkillItem*> T& _resultSkillItem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _result() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Bind(MountsTraderWindow* window, int32_t step) {
		return ((T (*)(SkillMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x14811C8))(this, window, step);
	}
	template <typename T = void> T Show() {
		return ((T (*)(SkillMountTradeStep*))(Il2CppBase() + 0x1481350))(this);
	}
	template <typename T = void> T OnSkillSelected(int32_t slotIndex, int32_t skillIndex, bool isSelected) {
		return ((T (*)(SkillMountTradeStep*, int32_t, int32_t, bool))(Il2CppBase() + 0x1481764))(this, slotIndex, skillIndex, isSelected);
	}
	template <typename T = void> T UpdateSkillItems() {
		return ((T (*)(SkillMountTradeStep*))(Il2CppBase() + 0x14816CC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetResult() {
		return ((T (*)(SkillMountTradeStep*))(Il2CppBase() + 0x1481894))(this);
	}

};

