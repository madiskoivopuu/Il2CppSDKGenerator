#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDescriptionItemComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDescriptionItemComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(MagicDescriptionItemComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEA7988))(this, x, y);
	}

};

}
