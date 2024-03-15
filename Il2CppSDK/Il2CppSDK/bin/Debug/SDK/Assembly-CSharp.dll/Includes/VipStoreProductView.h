#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipStoreProductView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipStoreProductView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ItemsContainer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = StoreProductContentSlotView*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Init(Il2CppString* blueprintName, TooltipView* tooltipView) {
		return ((R (*)(VipStoreProductView*, Il2CppString*, TooltipView*))(Il2CppBase() + 0x15CE4F4))(this, blueprintName, tooltipView);
	}

};

