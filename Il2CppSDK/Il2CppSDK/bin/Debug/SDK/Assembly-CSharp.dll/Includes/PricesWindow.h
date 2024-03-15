#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PricesWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PricesWindow"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = PriceView*> R& _priceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(PricesWindow*))(Il2CppBase() + 0x16E3BA0))(this);
	}

};

