#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryTab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryTab"));
	}

	template <typename R = uintptr_t> R& _tabButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TabType> R& _tabType() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Action1<TabType>*& OnClick() {
		return *(Action1<TabType>**)((uintptr_t)this + 0x28);
	}

	template <typename R = TabType> R get_TabType() {
		return ((R (*)(InventoryTab*))(Il2CppBase() + 0x123F0B4))(this);
	}
	template <typename R = void> R add_OnClick(Action1<TabType>* value) {
		return ((R (*)(InventoryTab*, Action1<TabType>*))(Il2CppBase() + 0x123F0BC))(this, value);
	}
	template <typename R = void> R remove_OnClick(Action1<TabType>* value) {
		return ((R (*)(InventoryTab*, Action1<TabType>*))(Il2CppBase() + 0x123F15C))(this, value);
	}
	template <typename R = void> R Bind(AvatarInventoryContainer* container, Action1<TabType>* onClick, TabType defaultType) {
		return ((R (*)(InventoryTab*, AvatarInventoryContainer*, Action1<TabType>*, TabType))(Il2CppBase() + 0x123F1FC))(this, container, onClick, defaultType);
	}
	template <typename R = void> R OnTabClick() {
		return ((R (*)(InventoryTab*))(Il2CppBase() + 0x123F390))(this);
	}
	template <typename R = void> R OnDifferentTabClick(TabType tabType) {
		return ((R (*)(InventoryTab*, TabType))(Il2CppBase() + 0x123F364))(this, tabType);
	}

};

