#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable" 

class CurrencyInventoryItem: InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyInventoryItem"));
	}

	template <typename T = int32_t> T& _stackCount() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& _transactionType() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& ConsumeButton() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& ButtonAnimator() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& ErrorText() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5A4C))(this);
	}
	template <typename T = void> T set_CurrencyType(uintptr_t value) {
		return ((T (*)(CurrencyInventoryItem*, uintptr_t))(Il2CppBase() + 0x1BD5A54))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t index, int32_t count, uintptr_t currencyType, uintptr_t transactionType) {
		return ((T (*)(CurrencyInventoryItem*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BD5A5C))(this, window, entity, index, count, currencyType, transactionType);
	}
	template <typename T = void> T Bind_1(uintptr_t window, uintptr_t entity, int32_t index) {
		return ((T (*)(CurrencyInventoryItem*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1BD5BA8))(this, window, entity, index);
	}
	template <typename T = void> T OnConsumeClick() {
		return ((T (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5BB4))(this);
	}
	template <typename T = void> T UpdateConsumeButton() {
		return ((T (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5A9C))(this);
	}

};

}
