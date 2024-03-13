#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class CurrencyDataContext : public DataContext1<CurrencyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyDataContext"));
	}

	template <typename T = Il2CppString*> static T& ByCurrencyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(CurrencyDataContext*))(Il2CppBase() + 0x1BCF93C))(this);
	}
	template <typename T = CurrencyEntity*> T GetEntityByCurrencyType(CurrencyType* type) {
		return ((T (*)(CurrencyDataContext*, CurrencyType*))(Il2CppBase() + 0x1BCFCBC))(this, type);
	}

};

