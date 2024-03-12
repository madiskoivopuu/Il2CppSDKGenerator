#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TripleString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TripleString"));
	}

	template <typename T = Il2CppString*> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Item2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Item3() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TripleString*, uintptr_t))(Il2CppBase() + 0x15266EC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(TripleString*, uintptr_t))(Il2CppBase() + 0x1526750))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TripleString*))(Il2CppBase() + 0x15267EC))(this);
	}

};

}
