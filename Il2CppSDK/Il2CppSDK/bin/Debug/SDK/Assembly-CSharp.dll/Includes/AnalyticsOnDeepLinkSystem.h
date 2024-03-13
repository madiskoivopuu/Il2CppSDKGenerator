#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsOnDeepLinkSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsOnDeepLinkSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(AnalyticsOnDeepLinkSystem*))(Il2CppBase() + 0x12A3EC0))(this);
	}

};

