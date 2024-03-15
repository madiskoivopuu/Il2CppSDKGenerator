#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "AvailablePlatform.h" 

class AvailablePlatformComponent : public EnumComponent1<AvailablePlatform*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AvailablePlatformComponent"));
	}



};

