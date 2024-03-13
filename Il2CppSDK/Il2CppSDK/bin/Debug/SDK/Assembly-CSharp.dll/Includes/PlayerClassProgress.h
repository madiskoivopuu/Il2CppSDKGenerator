#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassProgress"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PlayerClassProgress*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerClassProgress*> static T& Mastery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerClassProgress*> static T& Expertise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

