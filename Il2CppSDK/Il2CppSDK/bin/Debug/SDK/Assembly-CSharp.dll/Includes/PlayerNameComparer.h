#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerNameComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerNameComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(PlayerNameComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x116761C))(this, x, y);
	}

};

}
