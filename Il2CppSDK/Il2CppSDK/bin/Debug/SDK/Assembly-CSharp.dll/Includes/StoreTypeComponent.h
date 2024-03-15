#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "StoreType.h" 

class StoreTypeComponent : public EnumComponent1<StoreType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreTypeComponent"));
	}



};

