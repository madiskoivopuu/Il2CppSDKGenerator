#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreProductPriceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreProductPriceView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Discount() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(uintptr_t price, uintptr_t discount) {
		return ((T (*)(CustomStoreProductPriceView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BD825C))(this, price, discount);
	}

};

}
