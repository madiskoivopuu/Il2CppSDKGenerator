#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ProtoCurrenciesHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ProtoCurrenciesHelper"));
	}


	template <typename R = int32_t> static R GetCurrency(ProtoModels::Currencies* c, ProtoModels::CurrencyTypeEnum* ct) {
		return ((R (*)(void *, ProtoModels::Currencies*, ProtoModels::CurrencyTypeEnum*))(Il2CppBase() + 0x11B0B58))(0, c, ct);
	}
	 static Il2CppDictionary<ProtoModels::CurrencyTypeEnum*, int32_t>* GetCurrencies(ProtoModels::Currencies* c) {
		return ((Il2CppDictionary<ProtoModels::CurrencyTypeEnum*, int32_t>* (*)(void *, ProtoModels::Currencies*))(Il2CppBase() + 0x11B0BD8))(0, c);
	}

};

}
