#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountTradeStep" 

class TypeMountTradeStep: BaseMountTradeStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeMountTradeStep"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& traderTypeItems() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _result() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Bind(uintptr_t window, int32_t step) {
		return ((T (*)(TypeMountTradeStep*, uintptr_t, int32_t))(Il2CppBase() + 0x102C30C))(this, window, step);
	}
	template <typename T = void> T Show() {
		return ((T (*)(TypeMountTradeStep*))(Il2CppBase() + 0x102C4B4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetResult() {
		return ((T (*)(TypeMountTradeStep*))(Il2CppBase() + 0x102C68C))(this);
	}

};

}
