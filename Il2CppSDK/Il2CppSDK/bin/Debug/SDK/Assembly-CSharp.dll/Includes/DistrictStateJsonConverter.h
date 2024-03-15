#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "DistrictState.h" 

class DistrictStateJsonConverter : public TypeEnumJsonConverter1<DistrictState>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictStateJsonConverter"));
	}



};

