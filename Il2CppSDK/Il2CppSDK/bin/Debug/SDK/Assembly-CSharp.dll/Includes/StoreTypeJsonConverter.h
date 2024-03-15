#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "StoreType.h" 

class StoreTypeJsonConverter : public TypeEnumJsonConverter1<StoreType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreTypeJsonConverter"));
	}



};

