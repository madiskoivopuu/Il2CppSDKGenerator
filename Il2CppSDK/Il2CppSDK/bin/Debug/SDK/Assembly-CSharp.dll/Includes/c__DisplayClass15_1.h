#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass151
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_1"));
	}

	template <typename T = uintptr_t> T& price() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& resx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnBuyButtonClickb__2(int32_t successTransactionId) {
		return ((T (*)(cDisplayClass151*, int32_t))(Il2CppBase() + 0x10CFDF0))(this, successTransactionId);
	}
	template <typename T = void> T OnBuyButtonClickb__3(uintptr_t error, int32_t intVal) {
		return ((T (*)(cDisplayClass151*, uintptr_t, int32_t))(Il2CppBase() + 0x10D02B4))(this, error, intVal);
	}

};

}
