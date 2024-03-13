#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintAttribute"));
	}



};

