#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "StoreCategory.h" 

class StoreCategoryJsonConverter : public TypeEnumJsonConverter1<StoreCategory>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoryJsonConverter"));
	}



};

