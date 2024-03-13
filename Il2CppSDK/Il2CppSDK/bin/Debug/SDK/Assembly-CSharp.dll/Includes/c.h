#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c"));
	}

	template <typename T = c*> static T& 9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Func2bool, Il2CppString*>*> static T& 9__14_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Func2bool, Il2CppString*>*> static T& 9__14_1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T ToStringb__14_0(bool p) {
		return ((T (*)(c*, bool))(Il2CppBase() + 0x22A5CB4))(this, p);
	}
	template <typename T = Il2CppString*> T ToStringb__14_1(bool p) {
		return ((T (*)(c*, bool))(Il2CppBase() + 0x22A5CE0))(this, p);
	}

};

