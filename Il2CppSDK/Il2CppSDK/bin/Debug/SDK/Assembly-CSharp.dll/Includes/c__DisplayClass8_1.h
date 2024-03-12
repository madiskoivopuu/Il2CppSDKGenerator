#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass81
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass8_1"));
	}

	template <typename T = uintptr_t> T& price() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnBuyButtonClickb__1(int32_t successTransactionId) {
		return ((T (*)(cDisplayClass81*, int32_t))(Il2CppBase() + 0x10CF088))(this, successTransactionId);
	}
	template <typename T = void> T OnBuyButtonClickb__2(uintptr_t error, int32_t intVal) {
		return ((T (*)(cDisplayClass81*, uintptr_t, int32_t))(Il2CppBase() + 0x10CF248))(this, error, intVal);
	}

};

}
