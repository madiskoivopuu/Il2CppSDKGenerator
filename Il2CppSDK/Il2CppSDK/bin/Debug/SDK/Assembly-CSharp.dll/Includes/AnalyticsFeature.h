#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Feature.h" 

class AnalyticsFeature : public Feature
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsFeature"));
	}



};
