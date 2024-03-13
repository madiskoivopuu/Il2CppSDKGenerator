#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnalyticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnalyticsData"));
	}


	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(IAnalyticsData*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(IAnalyticsData*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}

};

