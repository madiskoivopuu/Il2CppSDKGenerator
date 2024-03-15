#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "CurrencyType.h" 

class CurrencyTypeJsonConverter : public TypeEnumJsonConverter1<CurrencyType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyTypeJsonConverter"));
	}



};

