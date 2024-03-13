#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeenNewType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenNewType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = SeenNewType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SeenNewType*> static T& PlayerClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SeenNewType*> static T& PlayerClassRunes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SeenNewType*> static T& Pet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SeenNewType*> static T& Cosmetic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

