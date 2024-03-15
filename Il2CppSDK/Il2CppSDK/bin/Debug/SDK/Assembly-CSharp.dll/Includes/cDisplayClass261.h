#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass261
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_1"));
	}

	template <typename R = Price*> R& price() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass260*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R OnBuyButtonClickb__1(int32_t successTransactionId) {
		return ((R (*)(cDisplayClass261*, int32_t))(Il2CppBase() + 0x10D1EB4))(this, successTransactionId);
	}

};

