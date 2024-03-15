#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep.h" 

class ChooseMountTradeStep : public BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChooseMountTradeStep"));
	}

	 Il2CppList<InventorySlot*>*& _inventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = TraderMountItem*> R& _mountItemPrefab() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = ChanceProgressItem*> R& _chanceProgressItem() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _result() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R Bind(MountsTraderWindow* window, int32_t step) {
		return ((R (*)(ChooseMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x1746DC0))(this, window, step);
	}
	template <typename R = Il2CppArray<int32_t>*> R GetResult() {
		return ((R (*)(ChooseMountTradeStep*))(Il2CppBase() + 0x17471B4))(this);
	}
	template <typename R = void> R UpdateStepProgress(float progress, int32_t grade, uintptr_t onUpdated, bool isFuse) {
		return ((R (*)(ChooseMountTradeStep*, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x17473C0))(this, progress, grade, onUpdated, isFuse);
	}
	template <typename R = void> R StepClear() {
		return ((R (*)(ChooseMountTradeStep*))(Il2CppBase() + 0x1747830))(this);
	}

};

