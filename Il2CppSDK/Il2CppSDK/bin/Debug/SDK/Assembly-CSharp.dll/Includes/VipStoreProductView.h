#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipStoreProductView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipStoreProductView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ItemsContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = StoreProductContentSlotView*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(Il2CppString* blueprintName, TooltipView* tooltipView) {
		return ((T (*)(VipStoreProductView*, Il2CppString*, TooltipView*))(Il2CppBase() + 0x15CE4F4))(this, blueprintName, tooltipView);
	}

};

