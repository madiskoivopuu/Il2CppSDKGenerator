#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerCurrencyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerCurrencyComponent"));
	}

	template <typename R = CurrencyType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Spending() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerCurrencyComponent*, Il2CppObject*))(Il2CppBase() + 0x15255B0))(this, target);
	}

};

