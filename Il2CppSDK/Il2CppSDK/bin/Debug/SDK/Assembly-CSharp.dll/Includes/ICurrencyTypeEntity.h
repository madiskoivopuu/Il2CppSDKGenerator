#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICurrencyTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICurrencyTypeEntity"));
	}


	template <typename R = CurrencyTypeComponent*> R get_currencyType() {
		return ((R (*)(ICurrencyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCurrencyType() {
		return ((R (*)(ICurrencyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCurrencyType(CurrencyType newType) {
		return ((R (*)(ICurrencyTypeEntity*, CurrencyType))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceCurrencyType(CurrencyType newType) {
		return ((R (*)(ICurrencyTypeEntity*, CurrencyType))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveCurrencyType() {
		return ((R (*)(ICurrencyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

