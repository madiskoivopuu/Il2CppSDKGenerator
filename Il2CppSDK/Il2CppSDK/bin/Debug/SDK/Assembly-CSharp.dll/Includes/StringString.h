#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringString"));
	}

	template <typename T = Il2CppString*> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(StringString*, uintptr_t))(Il2CppBase() + 0x16A0944))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(StringString*, uintptr_t))(Il2CppBase() + 0x16A0990))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StringString*))(Il2CppBase() + 0x16A0A18))(this);
	}

};

}
