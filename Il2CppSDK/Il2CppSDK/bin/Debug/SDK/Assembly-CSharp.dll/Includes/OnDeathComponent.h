#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDeathComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(OnDeathComponent*, uintptr_t))(Il2CppBase() + 0x11DC740))(this, targetObject);
	}

};

}
