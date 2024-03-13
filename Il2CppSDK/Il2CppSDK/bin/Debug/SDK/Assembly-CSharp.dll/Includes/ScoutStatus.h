#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutStatus"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ScoutStatus*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ScoutStatus*> static T& CanActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ScoutStatus*> static T& Active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ScoutStatus*> static T& Cooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

