#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable.h" 

class CurrencyInventoryItem : public InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyInventoryItem"));
	}

	template <typename R = int32_t> R& _stackCount() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = CurrencyType*> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x18C);
	}
	template <typename R = TransactionType*> R& _transactionType() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& ConsumeButton() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& ButtonAnimator() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& ErrorText() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}

	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5A4C))(this);
	}
	template <typename R = void> R set_CurrencyType(CurrencyType* value) {
		return ((R (*)(CurrencyInventoryItem*, CurrencyType*))(Il2CppBase() + 0x1BD5A54))(this, value);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, int32_t index, int32_t count, CurrencyType* currencyType, TransactionType* transactionType) {
		return ((R (*)(CurrencyInventoryItem*, IUIWindow*, GameEntity*, int32_t, int32_t, CurrencyType*, TransactionType*))(Il2CppBase() + 0x1BD5A5C))(this, window, entity, index, count, currencyType, transactionType);
	}
	template <typename R = void> R Bind_1(IUIWindow* window, GameEntity* entity, int32_t index) {
		return ((R (*)(CurrencyInventoryItem*, IUIWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x1BD5BA8))(this, window, entity, index);
	}
	template <typename R = void> R OnConsumeClick() {
		return ((R (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5BB4))(this);
	}
	template <typename R = void> R UpdateConsumeButton() {
		return ((R (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5A9C))(this);
	}

};

