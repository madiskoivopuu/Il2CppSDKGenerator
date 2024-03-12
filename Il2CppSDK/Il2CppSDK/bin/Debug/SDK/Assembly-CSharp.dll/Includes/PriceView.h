#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PriceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriceView"));
	}

	template <typename T = uintptr_t> T& _itemView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _priceView() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Show(uintptr_t resource, uintptr_t priceResource, int32_t price, uintptr_t tooltipView) {
		return ((T (*)(PriceView*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x16E3AFC))(this, resource, priceResource, price, tooltipView);
	}

};

}
