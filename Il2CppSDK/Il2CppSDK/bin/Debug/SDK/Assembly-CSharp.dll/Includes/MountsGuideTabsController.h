#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsGuideTabsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsGuideTabsController"));
	}

	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TabPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Tabs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PreviousButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NextButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TabsScroll() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _allMountsInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _maxTabCountViews() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _tabCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& _stepValue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _mountsGuideWindow() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(uintptr_t mountsGuideWindow) {
		return ((T (*)(MountsGuideTabsController*, uintptr_t))(Il2CppBase() + 0x154A4AC))(this, mountsGuideWindow);
	}
	template <typename T = void> T OnMountTabClick(uintptr_t tab) {
		return ((T (*)(MountsGuideTabsController*, uintptr_t))(Il2CppBase() + 0x154AD8C))(this, tab);
	}
	template <typename T = void> T OnPreviousButtonClick() {
		return ((T (*)(MountsGuideTabsController*))(Il2CppBase() + 0x154AF20))(this);
	}
	template <typename T = void> T OnNextButtonClick() {
		return ((T (*)(MountsGuideTabsController*))(Il2CppBase() + 0x154B314))(this);
	}
	template <typename T = void> T UpdateArrowButtons() {
		return ((T (*)(MountsGuideTabsController*))(Il2CppBase() + 0x154AAC8))(this);
	}
	template <typename T = void> T UpdateScrollPosition(bool moveNext) {
		return ((T (*)(MountsGuideTabsController*, bool))(Il2CppBase() + 0x154B184))(this, moveNext);
	}
	template <typename T = void> T ShowTab(uintptr_t activeTab) {
		return ((T (*)(MountsGuideTabsController*, uintptr_t))(Il2CppBase() + 0x154ABF0))(this, activeTab);
	}

};

}
