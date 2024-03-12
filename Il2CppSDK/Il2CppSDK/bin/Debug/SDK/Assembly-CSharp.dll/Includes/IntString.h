#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntString"));
	}

	template <typename T = int32_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(IntString*, uintptr_t))(Il2CppBase() + 0x14698E8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(IntString*, uintptr_t))(Il2CppBase() + 0x146990C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IntString*))(Il2CppBase() + 0x14699A8))(this);
	}

};

}
