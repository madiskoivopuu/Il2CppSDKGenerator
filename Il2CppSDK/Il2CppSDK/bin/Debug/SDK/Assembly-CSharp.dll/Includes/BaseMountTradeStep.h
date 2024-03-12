#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer" 

class BaseMountTradeStep: ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMountTradeStep"));
	}

	template <typename T = int32_t> T& Step() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int32_t> T get_Step() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F6BC))(this);
	}
	template <typename T = void> T set_Step(int32_t value) {
		return ((T (*)(BaseMountTradeStep*, int32_t))(Il2CppBase() + 0x166F6C4))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, int32_t step) {
		return ((T (*)(BaseMountTradeStep*, uintptr_t, int32_t))(Il2CppBase() + 0x166F6CC))(this, window, step);
	}
	template <typename T = void> T Show() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F6FC))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F724))(this);
	}
	template <typename T = int32_t> T GetNext() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F74C))(this);
	}
	template <typename T = int32_t> T GetPrevious() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F758))(this);
	}
	template <typename T = void> T UpdateStepProgress(float progress, int32_t grade, uintptr_t onUpdated, bool isFuse) {
		return ((T (*)(BaseMountTradeStep*, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x166F764))(this, progress, grade, onUpdated, isFuse);
	}
	template <typename T = void> T StepClear() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x166F768))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetResult() {
		return ((T (*)(BaseMountTradeStep*))(Il2CppBase() + 0x0))(this);
	}

};

}
