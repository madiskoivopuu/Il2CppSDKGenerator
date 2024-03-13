#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ProtoCurrenciesHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ProtoCurrenciesHelper"));
	}


	template <typename T = int32_t> static T GetCurrency(Currencies* c, CurrencyTypeEnum* ct) {
		return ((T (*)(void *, Currencies*, CurrencyTypeEnum*))(Il2CppBase() + 0x11B0B58))(0, c, ct);
	}
	template <typename T = Il2CppDictionary<CurrencyTypeEnum*, int32_t>*> static T GetCurrencies(Currencies* c) {
		return ((T (*)(void *, Currencies*))(Il2CppBase() + 0x11B0BD8))(0, c);
	}

};

}
