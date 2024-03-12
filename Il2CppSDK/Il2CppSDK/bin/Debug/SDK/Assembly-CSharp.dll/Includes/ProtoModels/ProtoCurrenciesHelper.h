#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ProtoCurrenciesHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ProtoCurrenciesHelper"));
	}


	template <typename T = int32_t> static T GetCurrency(uintptr_t c, uintptr_t ct) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11B0B58))(0, c, ct);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T GetCurrencies(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11B0BD8))(0, c);
	}

};

}
