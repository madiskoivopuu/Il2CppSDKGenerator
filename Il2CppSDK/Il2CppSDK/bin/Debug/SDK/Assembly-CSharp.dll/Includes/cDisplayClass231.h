#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass231
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_1"));
	}

	template <typename R = Price*> R& price() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass230*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnBuyClickb__1(int32_t successTransactionId) {
		return ((R (*)(cDisplayClass231*, int32_t))(Il2CppBase() + 0x10AD8FC))(this, successTransactionId);
	}
	template <typename R = void> R OnBuyClickb__2(PurchaseError* error, int32_t intVal) {
		return ((R (*)(cDisplayClass231*, PurchaseError*, int32_t))(Il2CppBase() + 0x10ADABC))(this, error, intVal);
	}

};

