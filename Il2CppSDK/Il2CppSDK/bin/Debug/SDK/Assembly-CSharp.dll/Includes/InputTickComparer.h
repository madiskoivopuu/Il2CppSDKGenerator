#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputTickComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputTickComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(InputTickComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x111D05C))(this, x, y);
	}

};

}
