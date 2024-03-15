#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnalyticsContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnalyticsContexts"));
	}


	template <typename R = AnalyticsContext*> R get_analytics() {
		return ((R (*)(IAnalyticsContexts*))(Il2CppBase() + 0x0))(this);
	}

};

