#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class DailyShopWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopWindow"));
	}

	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DialogueAnimator() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& Message() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& LockMessage() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = StandartButton*> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& Timer() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& _selectedIndex() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& _tax() {
		return *(T*)((uintptr_t)this + 0x184);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DailyShopWindow*))(Il2CppBase() + 0x1648920))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(DailyShopWindow*))(Il2CppBase() + 0x16489E8))(this);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(DailyShopWindow*))(Il2CppBase() + 0x16492AC))(this);
	}
	template <typename T = void> T OnSlotClick(DailyShopSlot* slot) {
		return ((T (*)(DailyShopWindow*, DailyShopSlot*))(Il2CppBase() + 0x1649150))(this, slot);
	}
	template <typename T = bool> T CanBuy(int32_t index, AccountEntity* accountEntity, GameEntity* target) {
		return ((T (*)(DailyShopWindow*, int32_t, AccountEntity*, GameEntity*))(Il2CppBase() + 0x1649440))(this, index, accountEntity, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DailyShopWindow*, float))(Il2CppBase() + 0x1649694))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(DailyShopWindow*))(Il2CppBase() + 0x1649D48))(this);
	}
	template <typename T = void> T ShowBuyResult(ServiceMessage* result) {
		return ((T (*)(DailyShopWindow*, ServiceMessage*))(Il2CppBase() + 0x1649FB0))(this, result);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(DailyShopWindow*, IInventoryItem*))(Il2CppBase() + 0x164A314))(this, item);
	}

};

