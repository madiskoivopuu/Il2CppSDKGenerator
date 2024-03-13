#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICurrencyTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICurrencyTypeEntity"));
	}


	template <typename T = CurrencyTypeComponent*> T get_currencyType() {
		return ((T (*)(ICurrencyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCurrencyType() {
		return ((T (*)(ICurrencyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCurrencyType(CurrencyType* newType) {
		return ((T (*)(ICurrencyTypeEntity*, CurrencyType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceCurrencyType(CurrencyType* newType) {
		return ((T (*)(ICurrencyTypeEntity*, CurrencyType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveCurrencyType() {
		return ((T (*)(ICurrencyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

