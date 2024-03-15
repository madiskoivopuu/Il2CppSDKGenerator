#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriceView"));
	}

	template <typename R = ItemView*> R& _itemView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ItemView*> R& _priceView() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Show(ItemEntity* resource, ItemEntity* priceResource, int32_t price, TooltipView* tooltipView) {
		return ((R (*)(PriceView*, ItemEntity*, ItemEntity*, int32_t, TooltipView*))(Il2CppBase() + 0x16E3AFC))(this, resource, priceResource, price, tooltipView);
	}

};

