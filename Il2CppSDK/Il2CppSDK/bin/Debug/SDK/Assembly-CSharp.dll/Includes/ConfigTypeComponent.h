#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumValueComponent1.h" 
#include "ConfigType.h" 

class ConfigTypeComponent : public EnumValueComponent1<ConfigType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigTypeComponent"));
	}



};

