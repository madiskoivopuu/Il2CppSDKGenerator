#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomNameRules
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomNameRules"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RandomNameRules*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RandomNameRules*> static T& FakePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

