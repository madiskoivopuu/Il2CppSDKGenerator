#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseForCurrencyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseForCurrencyData"));
	}

	template <typename R = int64_t> R& StoreId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = CurrencyType> R& Currency() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PurchaseForCurrencyData*, uintptr_t))(Il2CppBase() + 0x11B75C0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PurchaseForCurrencyData*, uintptr_t))(Il2CppBase() + 0x11B7614))(this, reader);
	}

};

