#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "CurrencyEntity.h" 

class CurrencyDataContext : public DataContext1<CurrencyEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyDataContext"));
	}

	template <typename R = Il2CppString*> static R& ByCurrencyType() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(CurrencyDataContext*))(Il2CppBase() + 0x1BCF93C))(this);
	}
	template <typename R = CurrencyEntity*> R GetEntityByCurrencyType(CurrencyType* type) {
		return ((R (*)(CurrencyDataContext*, CurrencyType*))(Il2CppBase() + 0x1BCFCBC))(this, type);
	}

};

