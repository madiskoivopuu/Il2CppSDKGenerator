#pragma once
#include <Il2Cpp/Il2Cpp.h>

class c
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c"));
	}

	template <typename R = c*> static R& 9() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Func2<bool, Il2CppString*>*& 9__14_0() {
		return *(Func2<bool, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Func2<bool, Il2CppString*>*& 9__14_1() {
		return *(Func2<bool, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = Il2CppString*> R ToStringb__14_0(bool p) {
		return ((R (*)(c*, bool))(Il2CppBase() + 0x22A5CB4))(this, p);
	}
	template <typename R = Il2CppString*> R ToStringb__14_1(bool p) {
		return ((R (*)(c*, bool))(Il2CppBase() + 0x22A5CE0))(this, p);
	}

};

