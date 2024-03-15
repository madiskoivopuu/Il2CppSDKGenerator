#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass680
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass68_0"));
	}

	template <typename R = PlayerClassRuneInventory*> R& window() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& isRuneInventory() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& selectedInventoryId() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppArray<ItemMessageData>*> R& itemsTo() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = PlayerClassRuneInventory*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& count() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ICommonUnityWorld*> R& world() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& fromClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R OnDeleteb__0(float coef) {
		return ((R (*)(cDisplayClass680*, float))(Il2CppBase() + 0x10B1EA8))(this, coef);
	}

};

