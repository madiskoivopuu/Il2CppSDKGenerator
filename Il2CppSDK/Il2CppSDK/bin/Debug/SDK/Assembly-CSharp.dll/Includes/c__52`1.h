#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c521
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__52`1"));
	}

	template <typename T = void*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__52_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__52_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& 9__52_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Sortb__52_0(uintptr_t i) {
		return ((T (*)(c521*, uintptr_t))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename T = int32_t> T Sortb__52_1(uintptr_t i) {
		return ((T (*)(c521*, uintptr_t))(Il2CppBase() + 0x0))(this, i);
	}
	template <typename T = int32_t> T Sortb__52_2(uintptr_t i) {
		return ((T (*)(c521*, uintptr_t))(Il2CppBase() + 0x0))(this, i);
	}

};

}
