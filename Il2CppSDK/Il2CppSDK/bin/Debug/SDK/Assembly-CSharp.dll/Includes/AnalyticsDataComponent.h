#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsDataComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsDataComponent"));
	}

	template <typename T = Il2CppString*> T& Label() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Sublabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AnalyticsDataComponent*, uintptr_t))(Il2CppBase() + 0x12A07A4))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AnalyticsDataComponent*, uintptr_t))(Il2CppBase() + 0x12A084C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AnalyticsDataComponent*, uintptr_t))(Il2CppBase() + 0x12A088C))(this, reader);
	}

};

}
