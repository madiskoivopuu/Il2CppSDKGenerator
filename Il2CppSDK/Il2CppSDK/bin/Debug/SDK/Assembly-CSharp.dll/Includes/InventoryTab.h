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
	template <typename T = uintptr_t> T& _tabType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_TabType() {
		return ((T (*)(InventoryTab*))(Il2CppBase() + 0x123F0B4))(this);
	}
	template <typename T = void> T add_OnClick(void* value) {
		return ((T (*)(InventoryTab*, void*))(Il2CppBase() + 0x123F0BC))(this, value);
	}
	template <typename T = void> T remove_OnClick(void* value) {
		return ((T (*)(InventoryTab*, void*))(Il2CppBase() + 0x123F15C))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t container, void* onClick, uintptr_t defaultType) {
		return ((T (*)(InventoryTab*, uintptr_t, void*, uintptr_t))(Il2CppBase() + 0x123F1FC))(this, container, onClick, defaultType);
	}
	template <typename T = void> T OnTabClick() {
		return ((T (*)(InventoryTab*))(Il2CppBase() + 0x123F390))(this);
	}
	template <typename T = void> T OnDifferentTabClick(uintptr_t tabType) {
		return ((T (*)(InventoryTab*, uintptr_t))(Il2CppBase() + 0x123F364))(this, tabType);
	}

};

}
