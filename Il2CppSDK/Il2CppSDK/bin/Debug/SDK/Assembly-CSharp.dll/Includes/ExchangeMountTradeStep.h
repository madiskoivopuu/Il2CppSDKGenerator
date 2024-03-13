#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep.h" 

class ExchangeMountTradeStep : public BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeMountTradeStep"));
	}

	template <typename T = ChanceProgressItem*> T& _chanceProgressItem() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = TraderResultItem*> T& resultItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = MountFuser*> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _randomItemIndex() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Bind(MountsTraderWindow* window, int32_t step) {
		return ((T (*)(ExchangeMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x1794910))(this, window, step);
	}
	template <typename T = void> T Show() {
		return ((T (*)(ExchangeMountTradeStep*))(Il2CppBase() + 0x179495C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetResult() {
		return ((T (*)(ExchangeMountTradeStep*))(Il2CppBase() + 0x1794C28))(this);
	}
	template <typename T = void> T UpdateStepProgress(float progress, int32_t grade, uintptr_t onUpdated, bool isFuse) {
		return ((T (*)(ExchangeMountTradeStep*, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1794C30))(this, progress, grade, onUpdated, isFuse);
	}

};

