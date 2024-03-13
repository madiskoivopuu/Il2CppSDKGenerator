#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnTypes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnTypes"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = SpawnTypes*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SpawnTypes*> static T& Random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SpawnTypes*> static T& Pool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

