#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class c191
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__19`1"));
	}

	 static c191T>*& 9() {
		return *(c191T>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1T>*& 9__19_0() {
		return *(Action1T>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R AsOnGameThreadCallbackb__19_0(T <p0>) {
		return ((R (*)(c191*, T))(Il2CppBase() + 0x0))(this, <p0>);
	}

};

