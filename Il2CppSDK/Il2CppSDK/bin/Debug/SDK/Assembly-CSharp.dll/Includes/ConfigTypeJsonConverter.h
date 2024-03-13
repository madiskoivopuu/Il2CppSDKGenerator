#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ValueEnumJsonConverter1.h" 

class ConfigTypeJsonConverter : public ValueEnumJsonConverter1<ConfigType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigTypeJsonConverter"));
	}



};

