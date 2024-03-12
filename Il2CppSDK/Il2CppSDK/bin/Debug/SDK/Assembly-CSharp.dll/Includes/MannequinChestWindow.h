#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class MannequinChestWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinChestWindow"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& MannequinCaption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& CloseTimer() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MannequinPuppetSlots() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& MannequinContainer() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& PuppetItemPrefab() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& TakeAllButton() {
		return *(T*)((uintptr_t)this + 0x178);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x1260438))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x12605C0))(this);
	}
	template <typename T = void> T InitPuppetSlots(uintptr_t entity, Il2CppArray<uintptr_t>* slots) {
		return ((T (*)(MannequinChestWindow*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12607F8))(this, entity, slots);
	}
	template <typename T = void> T UpdateCloseTimer(uintptr_t target) {
		return ((T (*)(MannequinChestWindow*, uintptr_t))(Il2CppBase() + 0x1260C28))(this, target);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x1260E4C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MannequinChestWindow*, float))(Il2CppBase() + 0x12610C8))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(MannequinChestWindow*, float))(Il2CppBase() + 0x12613BC))(this, deltaTime);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(MannequinChestWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1261590))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(MannequinChestWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1261860))(this, item, eventData);
	}
	template <typename T = void> T UpdatePuppetSlots(Il2CppArray<uintptr_t>* puppetSlots, uintptr_t item) {
		return ((T (*)(MannequinChestWindow*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1261638))(this, puppetSlots, item);
	}
	template <typename T = void> T OnTakeAllButton() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x12618D0))(this);
	}

};

}
