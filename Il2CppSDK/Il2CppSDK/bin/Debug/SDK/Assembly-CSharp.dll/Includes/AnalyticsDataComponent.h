#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsDataComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsDataComponent"));
	}

	template <typename R = Il2CppString*> R& Label() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Sublabel() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AnalyticsDataComponent*, Il2CppObject*))(Il2CppBase() + 0x12A07A4))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AnalyticsDataComponent*, uintptr_t))(Il2CppBase() + 0x12A084C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AnalyticsDataComponent*, uintptr_t))(Il2CppBase() + 0x12A088C))(this, reader);
	}

};

