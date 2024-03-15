#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class BaseMountTradeStep : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMountTradeStep"));
	}

	template <typename R = int32_t> R& Step() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = MountsTraderWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = int32_t> R get_Step() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F6BC))(this);
	}
	template <typename R = void> R set_Step(int32_t value) {
		return ((R (*)(BaseMountTradeStep*, int32_t))(Il2CppBase() + 0x166F6C4))(this, value);
	}
	template <typename R = void> R Bind(MountsTraderWindow* window, int32_t step) {
		return ((R (*)(BaseMountTradeStep*, MountsTraderWindow*, int32_t))(Il2CppBase() + 0x166F6CC))(this, window, step);
	}
	template <typename R = void> R Show() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F6FC))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F724))(this);
	}
	template <typename R = int32_t> R GetNext() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F74C))(this);
	}
	template <typename R = int32_t> R GetPrevious() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F758))(this);
	}
	template <typename R = void> R UpdateStepProgress(float progress, int32_t grade, uintptr_t onUpdated, bool isFuse) {
		return ((R (*)(BaseMountTradeStep*, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x166F764))(this, progress, grade, onUpdated, isFuse);
	}
	template <typename R = void> R StepClear() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F768))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R GetResult() {
		return ((R (*)(BaseMountTradeStep*))(Il2CppBase() + 0x0))(this);
	}

};

