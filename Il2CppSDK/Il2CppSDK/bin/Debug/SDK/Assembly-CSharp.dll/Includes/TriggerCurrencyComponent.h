#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerCurrencyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerCurrencyComponent"));
	}

	template <typename T = CurrencyType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Spending() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerCurrencyComponent*, Il2CppObject*))(Il2CppBase() + 0x15255B0))(this, target);
	}

};

