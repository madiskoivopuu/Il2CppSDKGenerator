#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 

class PositionPlaceEnumJsonConverter : public TypeEnumJsonConverter1<PositionPlace*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionPlaceEnumJsonConverter"));
	}



};

