#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "CurrencyType.h" 

class CurrencyTypeComponent : public EnumComponent1<CurrencyType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyTypeComponent"));
	}



};

