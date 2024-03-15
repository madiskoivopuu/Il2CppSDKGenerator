#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreProductPriceView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreProductPriceView"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Discount() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Init(Price price, Discount discount) {
		return ((R (*)(CustomStoreProductPriceView*, Price, Discount))(Il2CppBase() + 0x1BD825C))(this, price, discount);
	}

};

