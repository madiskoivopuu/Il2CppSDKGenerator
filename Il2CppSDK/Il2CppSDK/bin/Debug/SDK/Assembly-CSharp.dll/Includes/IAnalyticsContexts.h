#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnalyticsContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnalyticsContexts"));
	}


	template <typename T = AnalyticsContext*> T get_analytics() {
		return ((T (*)(IAnalyticsContexts*))(Il2CppBase() + 0x0))(this);
	}

};

