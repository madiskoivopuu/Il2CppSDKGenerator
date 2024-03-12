#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NameFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameFloat"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(NameFloat*, uintptr_t))(Il2CppBase() + 0x155A9DC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(NameFloat*, uintptr_t))(Il2CppBase() + 0x155AA24))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(NameFloat*))(Il2CppBase() + 0x155AABC))(this);
	}

};

}
