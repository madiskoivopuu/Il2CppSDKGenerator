#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreProductAmountWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductAmountWindow"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ChooseAmountText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StoreProductAmountWindow*))(Il2CppBase() + 0x1830538))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreProductAmountWindow*))(Il2CppBase() + 0x1831158))(this);
	}

};

}
