#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "AnalyticsSystem.h" 

class AnalyticsSystemComponent : public EnumComponent1<AnalyticsSystem>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsSystemComponent"));
	}



};

