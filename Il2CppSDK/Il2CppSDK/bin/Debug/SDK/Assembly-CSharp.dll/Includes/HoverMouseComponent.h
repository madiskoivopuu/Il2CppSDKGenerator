#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HoverMouseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HoverMouseComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(HoverMouseComponent*, uintptr_t))(Il2CppBase() + 0x1E33818))(this, targetObject);
	}

};

}
