#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreProductAmountWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductAmountWindow"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ChooseAmountText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Content() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = BadgeView*> R& Badge() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = StoreProductAmountItem*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StoreProductAmountWindow*))(Il2CppBase() + 0x1830538))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreProductAmountWindow*))(Il2CppBase() + 0x1831158))(this);
	}

};

