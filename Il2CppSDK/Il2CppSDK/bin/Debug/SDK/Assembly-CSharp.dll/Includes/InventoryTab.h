#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryTab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryTab"));
	}

	template <typename T = uintptr_t> T& _tabButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TabType*> T& _tabType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Action1TabType*>*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = TabType*> T get_TabType() {
		return ((T (*)(InventoryTab*))(Il2CppBase() + 0x123F0B4))(this);
	}
	template <typename T = void> T add_OnClick(Action1TabType*>* value) {
		return ((T (*)(InventoryTab*, Action1TabType*>*))(Il2CppBase() + 0x123F0BC))(this, value);
	}
	template <typename T = void> T remove_OnClick(Action1TabType*>* value) {
		return ((T (*)(InventoryTab*, Action1TabType*>*))(Il2CppBase() + 0x123F15C))(this, value);
	}
	template <typename T = void> T Bind(AvatarInventoryContainer* container, Action1TabType*>* onClick, TabType* defaultType) {
		return ((T (*)(InventoryTab*, AvatarInventoryContainer*, Action1TabType*>*, TabType*))(Il2CppBase() + 0x123F1FC))(this, container, onClick, defaultType);
	}
	template <typename T = void> T OnTabClick() {
		return ((T (*)(InventoryTab*))(Il2CppBase() + 0x123F390))(this);
	}
	template <typename T = void> T OnDifferentTabClick(TabType* tabType) {
		return ((T (*)(InventoryTab*, TabType*))(Il2CppBase() + 0x123F364))(this, tabType);
	}

};

