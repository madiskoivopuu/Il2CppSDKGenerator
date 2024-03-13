#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriceView"));
	}

	template <typename T = ItemView*> T& _itemView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ItemView*> T& _priceView() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Show(ItemEntity* resource, ItemEntity* priceResource, int32_t price, TooltipView* tooltipView) {
		return ((T (*)(PriceView*, ItemEntity*, ItemEntity*, int32_t, TooltipView*))(Il2CppBase() + 0x16E3AFC))(this, resource, priceResource, price, tooltipView);
	}

};

