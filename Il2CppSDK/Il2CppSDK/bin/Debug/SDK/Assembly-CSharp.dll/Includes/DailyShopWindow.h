#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class DailyShopWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopWindow"));
	}

	template <typename R = uintptr_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& DialogueAnimator() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& Message() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& LockMessage() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = Il2CppArray<DailyShopSlot*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& Timer() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = int32_t> R& _selectedIndex() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = float> R& _tax() {
		return *(R*)((uintptr_t)this + 0x184);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DailyShopWindow*))(Il2CppBase() + 0x1648920))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(DailyShopWindow*))(Il2CppBase() + 0x16489E8))(this);
	}
	template <typename R = void> R OnBuyButtonClick() {
		return ((R (*)(DailyShopWindow*))(Il2CppBase() + 0x16492AC))(this);
	}
	template <typename R = void> R OnSlotClick(DailyShopSlot* slot) {
		return ((R (*)(DailyShopWindow*, DailyShopSlot*))(Il2CppBase() + 0x1649150))(this, slot);
	}
	template <typename R = bool> R CanBuy(int32_t index, AccountEntity* accountEntity, GameEntity* target) {
		return ((R (*)(DailyShopWindow*, int32_t, AccountEntity*, GameEntity*))(Il2CppBase() + 0x1649440))(this, index, accountEntity, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DailyShopWindow*, float))(Il2CppBase() + 0x1649694))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(DailyShopWindow*))(Il2CppBase() + 0x1649D48))(this);
	}
	template <typename R = void> R ShowBuyResult(ServiceMessage* result) {
		return ((R (*)(DailyShopWindow*, ServiceMessage*))(Il2CppBase() + 0x1649FB0))(this, result);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(DailyShopWindow*, IInventoryItem*))(Il2CppBase() + 0x164A314))(this, item);
	}

};

