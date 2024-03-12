#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortX"));
	}


	template <typename T = int32_t> T Compare(uintptr_t a, uintptr_t b) {
		return ((T (*)(SortX*, uintptr_t, uintptr_t))(Il2CppBase() + 0x10C2444))(this, a, b);
	}

};

}
