#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "WorldType.h" 

class WorldTypeEnumJsonConverter : public TypeEnumJsonConverter1<WorldType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldTypeEnumJsonConverter"));
	}



};

