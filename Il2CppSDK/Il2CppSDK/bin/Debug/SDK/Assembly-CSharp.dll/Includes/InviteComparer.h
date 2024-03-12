#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(InviteComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x111AE14))(this, x, y);
	}

};

}
