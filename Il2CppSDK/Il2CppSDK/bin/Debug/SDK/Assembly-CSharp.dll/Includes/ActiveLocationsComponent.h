#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringValuesComponent.h" 

class ActiveLocationsComponent : public StringValuesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveLocationsComponent"));
	}



};
