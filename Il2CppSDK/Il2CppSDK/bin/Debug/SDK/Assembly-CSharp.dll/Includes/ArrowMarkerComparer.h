#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrowMarkerComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrowMarkerComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(ArrowMarkerComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1167558))(this, x, y);
	}

};

}
