#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsSystem"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = AnalyticsSystem*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AnalyticsSystem*> static T& Dev2Dev() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AnalyticsSystem*> static T& AppsFlyer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AnalyticsSystem*> static T& Firebase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

