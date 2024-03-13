#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable.h" 

class CurrencyInventoryItem : public InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyInventoryItem"));
	}

	template <typename T = int32_t> T& _stackCount() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = CurrencyType*> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = TransactionType*> T& _transactionType() {
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

	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5A4C))(this);
	}
	template <typename T = void> T set_CurrencyType(CurrencyType* value) {
		return ((T (*)(CurrencyInventoryItem*, CurrencyType*))(Il2CppBase() + 0x1BD5A54))(this, value);
	}
	template <typename T = void> T Bind(IUIWindow* window, GameEntity* entity, int32_t index, int32_t count, CurrencyType* currencyType, TransactionType* transactionType) {
		return ((T (*)(CurrencyInventoryItem*, IUIWindow*, GameEntity*, int32_t, int32_t, CurrencyType*, TransactionType*))(Il2CppBase() + 0x1BD5A5C))(this, window, entity, index, count, currencyType, transactionType);
	}
	template <typename T = void> T Bind_1(IUIWindow* window, GameEntity* entity, int32_t index) {
		return ((T (*)(CurrencyInventoryItem*, IUIWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x1BD5BA8))(this, window, entity, index);
	}
	template <typename T = void> T OnConsumeClick() {
		return ((T (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5BB4))(this);
	}
	template <typename T = void> T UpdateConsumeButton() {
		return ((T (*)(CurrencyInventoryItem*))(Il2CppBase() + 0x1BD5A9C))(this);
	}

};

