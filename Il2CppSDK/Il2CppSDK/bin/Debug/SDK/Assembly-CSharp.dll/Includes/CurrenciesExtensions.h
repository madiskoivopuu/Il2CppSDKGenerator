#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrenciesExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrenciesExtensions"));
	}


	template <typename T = Currencies*> static T GetCurrencies(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = void> static T AddCurrencies(uintptr_t entity, Currencies* currencies) {
		return ((T (*)(void *, uintptr_t, Currencies*))(Il2CppBase() + 0x0))(0, entity, currencies);
	}

};

