#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass261
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_1"));
	}

	template <typename T = Price*> T& price() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = cDisplayClass260*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnBuyButtonClickb__1(int32_t successTransactionId) {
		return ((T (*)(cDisplayClass261*, int32_t))(Il2CppBase() + 0x10D1EB4))(this, successTransactionId);
	}

};

