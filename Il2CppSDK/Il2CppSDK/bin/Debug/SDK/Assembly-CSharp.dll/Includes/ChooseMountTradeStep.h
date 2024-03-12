#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep" 

class ChooseMountTradeStep: BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChooseMountTradeStep"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _inventorySlots() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _mountItemPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _chanceProgressItem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _result() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Bind(uintptr_t window, int32_t step) {
		return ((T (*)(ChooseMountTradeStep*, uintptr_t, int32_t))(Il2CppBase() + 0x1746DC0))(this, window, step);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetResult() {
		return ((T (*)(ChooseMountTradeStep*))(Il2CppBase() + 0x17471B4))(this);
	}
	template <typename T = void> T UpdateStepProgress(float progress, int32_t grade, uintptr_t onUpdated, bool isFuse) {
		return ((T (*)(ChooseMountTradeStep*, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x17473C0))(this, progress, grade, onUpdated, isFuse);
	}
	template <typename T = void> T StepClear() {
		return ((T (*)(ChooseMountTradeStep*))(Il2CppBase() + 0x1747830))(this);
	}

};

}
