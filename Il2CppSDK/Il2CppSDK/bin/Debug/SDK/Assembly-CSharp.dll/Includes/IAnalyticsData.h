#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAnalyticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAnalyticsData"));
	}


	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(IAnalyticsData*, uintptr_t))(Il2CppBase() + 0x0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(IAnalyticsData*, uintptr_t))(Il2CppBase() + 0x0))(this, reader);
	}

};

