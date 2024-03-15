#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsGuideTabsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsGuideTabsController"));
	}

	template <typename R = uintptr_t> R& Content() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = MountTabButton*> R& TabPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<MountTabButton*>*& Tabs() {
		return *(Il2CppList<MountTabButton*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& PreviousButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& NextButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& TabsScroll() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R& _allMountsInfo() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& _maxTabCountViews() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& _tabCount() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = float> R& _stepValue() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = MountsGuideWindow*> R& _mountsGuideWindow() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Init(MountsGuideWindow* mountsGuideWindow) {
		return ((R (*)(MountsGuideTabsController*, MountsGuideWindow*))(Il2CppBase() + 0x154A4AC))(this, mountsGuideWindow);
	}
	template <typename R = void> R OnMountTabClick(MountTabButton* tab) {
		return ((R (*)(MountsGuideTabsController*, MountTabButton*))(Il2CppBase() + 0x154AD8C))(this, tab);
	}
	template <typename R = void> R OnPreviousButtonClick() {
		return ((R (*)(MountsGuideTabsController*))(Il2CppBase() + 0x154AF20))(this);
	}
	template <typename R = void> R OnNextButtonClick() {
		return ((R (*)(MountsGuideTabsController*))(Il2CppBase() + 0x154B314))(this);
	}
	template <typename R = void> R UpdateArrowButtons() {
		return ((R (*)(MountsGuideTabsController*))(Il2CppBase() + 0x154AAC8))(this);
	}
	template <typename R = void> R UpdateScrollPosition(bool moveNext) {
		return ((R (*)(MountsGuideTabsController*, bool))(Il2CppBase() + 0x154B184))(this, moveNext);
	}
	template <typename R = void> R ShowTab(MountTabButton* activeTab) {
		return ((R (*)(MountsGuideTabsController*, MountTabButton*))(Il2CppBase() + 0x154ABF0))(this, activeTab);
	}

};

