#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass3101
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass31_0`1"));
	}

	template <typename T = void*> T& toConvert() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__0(uintptr_t val) {
		return ((T (*)(cDisplayClass3101*, uintptr_t))(Il2CppBase() + 0x0))(this, val);
	}

};

}
