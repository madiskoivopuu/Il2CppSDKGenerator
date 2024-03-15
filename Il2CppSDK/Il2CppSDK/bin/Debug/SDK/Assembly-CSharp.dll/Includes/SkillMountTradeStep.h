#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep.h" 

class SkillMountTradeStep : public BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillMountTradeStep"));
	}

	template <typename R = Il2CppArray<TraderSkillItem*>*> R& traderSkillItems() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = TraderSkillItem*> R& _resultSkillItem() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _result() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Bind(MountsTraderWindow* window, int32_t step) {
		return ((R (*)(SkillMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x14811C8))(this, window, step);
	}
	template <typename R = void> R Show() {
		return ((R (*)(SkillMountTradeStep*))(Il2CppBase() + 0x1481350))(this);
	}
	template <typename R = void> R OnSkillSelected(int32_t slotIndex, int32_t skillIndex, bool isSelected) {
		return ((R (*)(SkillMountTradeStep*, int32_t, int32_t, bool))(Il2CppBase() + 0x1481764))(this, slotIndex, skillIndex, isSelected);
	}
	template <typename R = void> R UpdateSkillItems() {
		return ((R (*)(SkillMountTradeStep*))(Il2CppBase() + 0x14816CC))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R GetResult() {
		return ((R (*)(SkillMountTradeStep*))(Il2CppBase() + 0x1481894))(this);
	}

};

