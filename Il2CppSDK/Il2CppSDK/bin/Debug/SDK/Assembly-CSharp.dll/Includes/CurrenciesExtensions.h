#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrenciesExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrenciesExtensions"));
	}


	template <typename R = Currencies*> static R GetCurrencies(uintptr_t entity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename R = void> static R AddCurrencies(uintptr_t entity, Currencies* currencies) {
		return ((R (*)(void *, uintptr_t, Currencies*))(Il2CppBase() + 0x0))(0, entity, currencies);
	}

};

