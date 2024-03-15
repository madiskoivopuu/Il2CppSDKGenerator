#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass101
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass10_1"));
	}

	template <typename R = Price> R& price() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass100*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnBuyButtonClickb__1(int32_t successTransactionId) {
		return ((R (*)(cDisplayClass101*, int32_t))(Il2CppBase() + 0x10A8988))(this, successTransactionId);
	}
	template <typename R = void> R OnBuyButtonClickb__2(PurchaseError error, int32_t intVal) {
		return ((R (*)(cDisplayClass101*, PurchaseError, int32_t))(Il2CppBase() + 0x10A8B48))(this, error, intVal);
	}

};

