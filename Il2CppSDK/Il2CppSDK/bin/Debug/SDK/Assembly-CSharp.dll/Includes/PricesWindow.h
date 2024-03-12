#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class PricesWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PricesWindow"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _priceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(PricesWindow*))(Il2CppBase() + 0x16E3BA0))(this);
	}

};

}
