#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass251
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass25_1"));
	}

	template <typename R = Price*> R& price() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass250*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnBuyButtonClickb__1(int32_t successTransactionId) {
		return ((R (*)(cDisplayClass251*, int32_t))(Il2CppBase() + 0x10D09C8))(this, successTransactionId);
	}
	template <typename R = void> R OnBuyButtonClickb__2(PurchaseError* error, int32_t intVal) {
		return ((R (*)(cDisplayClass251*, PurchaseError*, int32_t))(Il2CppBase() + 0x10D0B88))(this, error, intVal);
	}

};

