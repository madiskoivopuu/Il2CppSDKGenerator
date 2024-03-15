#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass151
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_1"));
	}

	template <typename R = Price*> R& price() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IEnumerable1Il2CppString*>*& resx() {
		return *(IEnumerable1Il2CppString*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = cDisplayClass150*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R OnBuyButtonClickb__2(int32_t successTransactionId) {
		return ((R (*)(cDisplayClass151*, int32_t))(Il2CppBase() + 0x10CFDF0))(this, successTransactionId);
	}
	template <typename R = void> R OnBuyButtonClickb__3(PurchaseError* error, int32_t intVal) {
		return ((R (*)(cDisplayClass151*, PurchaseError*, int32_t))(Il2CppBase() + 0x10D02B4))(this, error, intVal);
	}

};

