#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class c871
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__87`1"));
	}

	 static c871T>*& 9() {
		return *(c871T>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1T>*& 9__87_0() {
		return *(Action1T>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__87_0(T <p0>) {
		return ((R (*)(c871*, T))(Il2CppBase() + 0x0))(this, <p0>);
	}

};

