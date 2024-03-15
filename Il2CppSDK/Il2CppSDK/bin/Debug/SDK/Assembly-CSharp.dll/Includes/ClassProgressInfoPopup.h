#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassProgressInfoPopup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassProgressInfoPopup"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeButtons() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _frame() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _bottomDescription() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _resourceViews() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ClassProgressInfoPopup*))(Il2CppBase() + 0x159A36C))(this);
	}
	template <typename R = void> R Show(ItemEntity* playerClass, TooltipView* tooltipView) {
		return ((R (*)(ClassProgressInfoPopup*, ItemEntity*, TooltipView*))(Il2CppBase() + 0x159A45C))(this, playerClass, tooltipView);
	}
	template <typename R = void> R Awakeb__7_0() {
		return ((R (*)(ClassProgressInfoPopup*))(Il2CppBase() + 0x159AC14))(this);
	}

};

