#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep.h" 

class ExchangeMountTradeStep : public BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeMountTradeStep"));
	}

	template <typename R = ChanceProgressItem*> R& _chanceProgressItem() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = TraderResultItem*> R& resultItem() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _randomItemIndex() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Bind(MountsTraderWindow* window, int32_t step) {
		return ((R (*)(ExchangeMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x1794910))(this, window, step);
	}
	template <typename R = void> R Show() {
		return ((R (*)(ExchangeMountTradeStep*))(Il2CppBase() + 0x179495C))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R GetResult() {
		return ((R (*)(ExchangeMountTradeStep*))(Il2CppBase() + 0x1794C28))(this);
	}
	template <typename R = void> R UpdateStepProgress(float progress, int32_t grade, uintptr_t onUpdated, bool isFuse) {
		return ((R (*)(ExchangeMountTradeStep*, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1794C30))(this, progress, grade, onUpdated, isFuse);
	}

};

